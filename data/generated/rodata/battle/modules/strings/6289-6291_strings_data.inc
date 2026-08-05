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
	.globl gUnknown_85CC888
gUnknown_85CC888: @ 0x085CC888

	@ src/strings.c:754 gText_NicknameHatchPrompt
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC888
gText_Rom_5CC888: @ 0x085CC888
	.string "うまれた {STR_VAR_1}に\nニックネームを つけますか？$"
	.if (. - gText_Rom_5CC888) != 0x18
	.error "gText_Rom_5CC888 must retain its original byte length"
	.endif
