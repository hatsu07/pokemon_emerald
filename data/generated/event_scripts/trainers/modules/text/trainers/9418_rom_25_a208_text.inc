	@ data/text/trainers.inc:284 Route104_Text_CindyRematchIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25A208
gText_Rom_25A208: @ 0x0825A208
	.string "また おあい しましたわね\nおてあわせ おねがい できるかしら{EOS}"
	.if (. - gText_Rom_25A208) != 0x20
	.error "gText_Rom_25A208 must retain its original byte length"
	.endif
