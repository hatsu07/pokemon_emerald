	@ data/text/trainers.inc:1028 Route111_Text_CeliaIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25C092
gText_Rom_25C092: @ 0x0825C092
	.string "こんな ところで\nピクニックを するんじゃ なかった!{EOS}"
	.if (. - gText_Rom_25C092) != 0x1c
	.error "gText_Rom_25C092 must retain its original byte length"
	.endif
