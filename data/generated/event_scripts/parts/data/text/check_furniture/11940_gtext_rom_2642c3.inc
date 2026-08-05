	@ data/text/check_furniture.inc:13 Text_Vase
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2642C3
gText_Rom_2642C3: @ 0x082642C3
	.string "たかそうな つぼが ある!\nのぞきこむと……\pなかは からっぽ だ!$"
	.if (. - gText_Rom_2642C3) != 0x23
	.error "gText_Rom_2642C3 must retain its original byte length"
	.endif
