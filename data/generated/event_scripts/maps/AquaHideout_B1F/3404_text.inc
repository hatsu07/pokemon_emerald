	@ data/maps/AquaHideout_B1F/scripts.inc:142 AquaHideout_B1F_Text_Grunt7PostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_217F7B
gText_Rom_217F7B: @ 0x08217F7B
	.string "ユニフォームが かっこいいと\nしょうぶに まけても えになる でしょ?{EOS}"
	.if (. - gText_Rom_217F7B) != 0x24
	.error "gText_Rom_217F7B must retain its original byte length"
	.endif
