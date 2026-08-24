
	@ src/strings.c:753 gText_HatchedFromEgg
	.globl gText_HatchedFromEgg
gText_HatchedFromEgg: @ 0x085CC874
	.string "タマゴが かえって\n{STR_VAR_1}が うまれた!{EOS}"
	.if (. - gText_HatchedFromEgg) > 0x14
	.error "gText_HatchedFromEgg may not grow beyond its original slot"
	.endif
	.if (. - gText_HatchedFromEgg) < 0x14
	.space 0x14 - (. - gText_HatchedFromEgg)
	.endif

	@ src/strings.c:754 gText_NicknameHatchPrompt
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_NicknameHatchPrompt
gText_NicknameHatchPrompt: @ 0x085CC888
	.string "うまれた {STR_VAR_1}に\nニックネームを つけますか？{EOS}"
	.if (. - gText_NicknameHatchPrompt) != 0x18
	.error "gText_NicknameHatchPrompt must retain its original byte length"
	.endif
