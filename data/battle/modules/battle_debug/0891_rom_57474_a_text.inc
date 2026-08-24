	@ src/battle_debug.c:235 sText_Ability (+1 aliases)
	.globl sText_Ability
sText_Ability: @ 0x0857474A
	.string "とくせい{EOS}"
	.if (. - sText_Ability) > 0x5
	.error "sText_Ability may not grow beyond its original slot"
	.endif
	.if (. - sText_Ability) < 0x5
	.space 0x5 - (. - sText_Ability)
	.endif
