	@ data/text/trainers.inc:1274 Route113_Text_LawrencePostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25CA57
gText_Rom_25CA57: @ 0x0825CA57
	.string "ぼくも はいに もぐっちゃおう かしら$"
	.if (. - gText_Rom_25CA57) != 0x14
	.error "gText_Rom_25CA57 must retain its original byte length"
	.endif
