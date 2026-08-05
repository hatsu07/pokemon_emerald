	@ src/strings.c:1076 gText_CantAcceptCardFromTrainer
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2922
gText_Rom_2C2922: @ 0x082C2922
	.string "  この あいて からは ふしぎなカードを\nうけとれません!$"
	.if (. - gText_Rom_2C2922) != 0x1f
	.error "gText_Rom_2C2922 must retain its original byte length"
	.endif
