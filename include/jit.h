/*
 * Copyright 2016 Fabian Mastenbroek
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef JIT_H
#define JIT_H

#define BRAINFUCK_EUNAVAILABLE 2 /**< Feature not implemented or unavailable */

/**
 * Execute the given list of instructions using a Just-in-Time compiler.
 *
 * @param root The first in the list of instructions.
 * @param context The context within the execution takes place.
 * @return A negative non-zero integer to indicate a failure, zero on success.
 */
int brainfuck_execute_jit(struct BrainfuckInstruction *,
						  struct BrainfuckExecutionContext *);

#endif /* JIT_H */
