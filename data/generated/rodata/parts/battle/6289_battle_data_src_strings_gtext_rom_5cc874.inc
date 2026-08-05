	@ src/strings.c:753 gText_HatchedFromEgg
	.globl gText_Rom_5CC874
gText_Rom_5CC874: @ 0x085CC874
	.string "タマゴが かえって\n{STR_VAR_1}が うまれた!$"
	.if (. - gText_Rom_5CC874) > 0x14
	.error "gText_Rom_5CC874 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC874) < 0x14
	.space 0x14 - (. - gText_Rom_5CC874)
	.endif
