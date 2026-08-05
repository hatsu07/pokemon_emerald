	@ src/strings.c:813 gText_BattleTowerDesc
	.globl gText_Rom_5CCBE0
gText_Rom_5CCBE0: @ 0x085CCBE0
	.string "かちぬき ひたすら うえを めざす。\nさいのうを ためされる。$"
	.if (. - gText_Rom_5CCBE0) > 0x20
	.error "gText_Rom_5CCBE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCBE0) < 0x20
	.space 0x20 - (. - gText_Rom_5CCBE0)
	.endif
