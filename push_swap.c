/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:42:31 by paprzyby          #+#    #+#             */
/*   Updated: 2024/07/23 16:17:20 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	finish_rotation(t_list **stack, t_list *top_node, char stack_name)
{
	while (*stack != top_node)
	{
		if (stack_name == 'a')
		{
			if (top_node->top_bot)
				ra(stack, false);
			else
				rra(stack, false);
		}
		else if (stack_name == 'b')
		{
			if (top_node->top_bot)
				rb(stack, false);
			else
				rrb(stack, false);
		}
	}
}

void	rotate_both(t_list **a, t_list **b, t_list *cheapest_node)
{
	while (*a != cheapest_node->target_node && *b != cheapest_node)
			rr(a, b, false);
	set_node_position(*a);
	set_node_position(*b);
}

void	reverse_rotate_both(t_list **a, t_list **b, t_list *cheapest_node)
{
	while (*a != cheapest_node->target_node && *b != cheapest_node)
			rrr(a, b, false);
	set_node_position(*a);
	set_node_position(*b);
}

void	move_the_nodes(t_list **a, t_list **b)
{
	t_list	*cheapest_node;
	t_list	*head;

	head = *b;
	while (head)
	{
		if (head->cheapest)
			break ;
		head = head->next;
	}
	cheapest_node = head;
	if (cheapest_node == NULL)
		return;
	if (cheapest_node->top_bot && cheapest_node->target_node->top_bot)
		rotate_both(a, b, cheapest_node);
	else if (!(cheapest_node->top_bot) && !(cheapest_node->target_node->top_bot))
		reverse_rotate_both(a, b, cheapest_node);
	finish_rotation(b, cheapest_node, 'b');
	finish_rotation(a, cheapest_node->target_node, 'a');
	pa(a, b);
}

void	push_swap(t_list **a, t_list **b)
{
	t_list	*smallest;

	while ((*a)->next->next->next != NULL)
		pb(a, b);
	three_nodes(a);
	while (*b)
	{
		set_node_position(*a);
		set_node_position(*b);
		set_target_node(*a, *b);
		set_the_price(*a, *b);
		set_the_cheapest(*b);
		move_the_nodes(a, b);
	}
	set_node_position(*a);
	smallest = find_the_smallest(*a);
	if (smallest->top_bot)
		while (*a != smallest)
			ra(a, false);
	else
		while (*a != smallest)
			rra(a, false);
}

//192 262 433 196 446 337 29 447 455 76 485 51 354 221 260 73 250 289 133 464 87 147 31 68 208 331 12 478 311 278 349 316 154 255 70 191 251 205 50 434 361 61 116 373 67 71 74 111 268 4 143 88 414 436 148 58 84 394 26 282 156 161 320 132 177 18 438 408 223 466 399 277 82 146 469 186 120 218 165 66 303 246 393 184 330 243 426 432 287 365 98 32 411 30 237 420 457 173 487 499 197 93 60 461 206 291 290 244 483 72 326 439 370 265 348 125 401 46 390 8 306 183 168 24 495 39 49 389 338 21 100 69 388 486 385 314 398 158 53 241 10 113 336 500 48 136 445 359 440 101 474 435 75 302 121 424 491 119 167 159 224 417 63 204 25 109 216 403 118 209 187 305 185 77 176 275 470 383 468 239 54 232 7 339 117 350 86 104 108 322 458 490 55 372 38 297 83 182 430 16 341 453 107 328 400 23 422 325 294 444 384 225 259 190 124 357 347 138 460 89 41 402 397 362 496 431 149 242 413 482 356 472 286 264 127 1 34 280 418 200 343 345 382 307 229 201 231 203 6 498 142 415 473 180 135 97 340 351 226 494 137 99 240 298 312 334 475 366 281 263 17 62 369 296 409 451 380 164 35 172 110 368 283 476 220 386 407 427 114 299 129 91 274 266 381 28 103 106 160 367 288 497 90 412 47 152 188 378 406 222 145 272 169 293 174 45 252 141 248 247 249 271 15 315 342 335 319 346 64 395 44 2 333 360 488 304 56 96 5 396 284 392 332 166 301 155 353 295 352 85 238 140 379 377 3 391 256 448 211 151 441 14 20 19 358 217 363 94 150 285 318 425 236 92 228 310 463 37 234 179 144 194 471 233 254 212 130 207 171 279 210 465 22 449 375 162 456 214 13 178 153 376 323 374 115 131 309 454 78 477 33 308 102 410 321 213 215 163 317 123 493 128 81 462 329 355 43 52 258 300 170 36 59 429 443 344 95 11 134 419 230 189 112 79 126 199 122 467 313 459 484 261 416 157 195 292 327 269 387 175 57 364 257 219 273 421 481 450 193 405 479 227 276 371 480 9 404 235 253 442 198 42 139 267 105 489 202 423 492 437 65 270 245 181 40 27 324 428 80 452