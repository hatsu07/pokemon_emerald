	@ asm/hall_of_fame.s:2002 Task_HofPC_DrawSpritesPrintText
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9328
gText_Rom_5C9328: @ 0x085C9328
	.string "だい{0xFD}{0x02}かい　でんどういり！$"
	.if (. - gText_Rom_5C9328) != 0xf
	.error "gText_Rom_5C9328 must retain its original byte length"
	.endif
