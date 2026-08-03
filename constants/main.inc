@ asm/main.s specific constants and struct Main offsets.
@ Values are kept separate from main.s so the original instruction layout can
@ remain unchanged while replacing raw numbers with semantic expressions.

@ Reset / startup
.set MAIN_RESET_ALL,                         0xFF
.set MAIN_RGB_WHITE,                         0x7FFF
.set MAIN_WAITCNT_CONFIG,                    0x4014
.set MAIN_HEAP_SIZE,                         0x1C000
.set MAIN_UNUSED_VAR_INITIAL_VALUE,          0x0FC0

@ Key input
.set MAIN_KEY_A,                             1 << 0
.set MAIN_KEY_B,                             1 << 1
.set MAIN_KEY_SELECT,                        1 << 2
.set MAIN_KEY_START,                         1 << 3
.set MAIN_KEY_L,                             1 << 9
.set MAIN_KEYS_MASK,                         0x03FF
.set MAIN_SOFT_RESET_OTHER_KEYS,             MAIN_KEY_B | MAIN_KEY_SELECT | MAIN_KEY_START
.set MAIN_KEY_REPEAT_CONTINUE_DELAY,         5
.set MAIN_KEY_REPEAT_START_DELAY,            40

@ SaveBlock2 options
.set MAIN_SAVE_BLOCK2_BUTTON_MODE_OFFSET,    0x13
.set MAIN_BUTTON_MODE_L_EQUALS_A,             2

@ Display / timers
.set MAIN_VCOUNT_LINE,                       150
.set MAIN_DISPSTAT_VCOUNT_INTR,              1 << 5
.set MAIN_TIMER_ENABLE,                      1 << 7

@ Interrupt table and IWRAM IntrMain copy
.set MAIN_INTR_TABLE_COUNT,                  14
.set MAIN_INTR_TABLE_SERIAL_OFFSET,          1 * 4
.set MAIN_INTR_TABLE_TIMER3_OFFSET,          2 * 4
.set MAIN_INTR_TABLE_TIMER2_OFFSET,          7 * 4
.set MAIN_INTR_COPY_WORDS,                   0x200
.set MAIN_INTR_DMA_CONTROL,                  0x84000000 | MAIN_INTR_COPY_WORDS
.set MAIN_INTR_CHECK_CLEAR_VBLANK_MASK,      0xFFFF ^ INTR_FLAG_VBLANK

@ struct Main offsets
.set MAIN_CALLBACK1_OFFSET,                  0x000
.set MAIN_CALLBACK2_OFFSET,                  0x004
.set MAIN_SAVED_CALLBACK_OFFSET,             0x008
.set MAIN_VBLANK_CALLBACK_OFFSET,            0x00C
.set MAIN_HBLANK_CALLBACK_OFFSET,            0x010
.set MAIN_VCOUNT_CALLBACK_OFFSET,            0x014
.set MAIN_SERIAL_CALLBACK_OFFSET,            0x018
.set MAIN_INTR_CHECK_OFFSET,                 0x01C
.set MAIN_VBLANK_COUNTER1_OFFSET,            0x020
.set MAIN_VBLANK_COUNTER2_OFFSET,            0x024
.set MAIN_HELD_KEYS_RAW_OFFSET,              0x028
.set MAIN_NEW_KEYS_RAW_OFFSET,               0x02A
.set MAIN_HELD_KEYS_OFFSET,                  0x02C
.set MAIN_NEW_KEYS_OFFSET,                   0x02E
.set MAIN_NEW_AND_REPEATED_KEYS_OFFSET,      0x030
.set MAIN_KEY_REPEAT_COUNTER_OFFSET,         0x032
.set MAIN_WATCHED_KEYS_PRESSED_OFFSET,       0x034
.set MAIN_WATCHED_KEYS_MASK_OFFSET,          0x036
.set MAIN_STATE_OFFSET,                      0x438
.set MAIN_FLAGS_OFFSET,                      0x439
.set MAIN_FLAG_IN_BATTLE,                    1 << 1

@ Other structure offsets and masks
.set MAIN_SOUND_INFO_PCM_DMA_COUNTER_OFFSET, 0x004
.set MAIN_BATTLE_TYPE_RNG_SYNC_MASK,         0x013F0102

@ DmaStop-compatible masks used by DoSoftReset
.set MAIN_DMA_STOP_STAGE1_MASK,              0xC5FF
.set MAIN_DMA_STOP_STAGE2_MASK,              0x7FFF

@ CpuFill16(0, gPokemonCrySongs, 0x68)
.set MAIN_CLEAR_CRY_SONGS_CPUSET,            0x01000034
