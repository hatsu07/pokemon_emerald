	@ src/strings.c:754 gText_NicknameHatchPrompt
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC888
gText_Rom_5CC888: @ 0x085CC888
	.string "うまれた {STR_VAR_1}に\nニックネームを つけますか？$"
	.if (. - gText_Rom_5CC888) != 0x18
	.error "gText_Rom_5CC888 must retain its original byte length"
	.endif
