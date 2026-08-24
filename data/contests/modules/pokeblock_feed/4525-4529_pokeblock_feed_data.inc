	@ src/pokeblock_feed.c:99 sText_Var1AteTheVar2
	.globl sText_Var1AteTheVar2
sText_Var1AteTheVar2: @ 0x085C9885
	.string "{STR_VAR_1}は {STR_VAR_2}を\nたべた!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - sText_Var1AteTheVar2) > 0xf
	.error "sText_Var1AteTheVar2 may not grow beyond its original slot"
	.endif
	.if (. - sText_Var1AteTheVar2) < 0xf
	.space 0xf - (. - sText_Var1AteTheVar2)
	.endif

	@ src/pokeblock_feed.c:100 sText_Var1HappilyAteVar2
	.globl sText_Var1HappilyAteVar2
sText_Var1HappilyAteVar2: @ 0x085C9894
	.string "{STR_VAR_1}は {STR_VAR_2}を\nよろこんで たべた!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - sText_Var1HappilyAteVar2) > 0x15
	.error "sText_Var1HappilyAteVar2 may not grow beyond its original slot"
	.endif
	.if (. - sText_Var1HappilyAteVar2) < 0x15
	.space 0x15 - (. - sText_Var1HappilyAteVar2)
	.endif

	@ src/pokeblock_feed.c:101 sText_Var1DisdainfullyAteVar2
	.globl sText_Var1DisdainfullyAteVar2
sText_Var1DisdainfullyAteVar2: @ 0x085C98A9
	.string "{STR_VAR_1}は {STR_VAR_2}を\nいやそうに たべた!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - sText_Var1DisdainfullyAteVar2) > 0x15
	.error "sText_Var1DisdainfullyAteVar2 may not grow beyond its original slot"
	.endif
	.if (. - sText_Var1DisdainfullyAteVar2) < 0x15
	.space 0x15 - (. - sText_Var1DisdainfullyAteVar2)
	.endif
