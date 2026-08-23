	@ src/battle_debug.c:431 battle_debug_line_431 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_DoubleBattle
sScriptMenuText_DoubleBattle: @ 0x085CAAEC
	.string "ダブルバトル{EOS}"
	.if (. - sScriptMenuText_DoubleBattle) != 0x7
	.error "sScriptMenuText_DoubleBattle must retain its original byte length"
	.endif
