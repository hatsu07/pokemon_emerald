	@ data/text/trainers.inc:416 Route106_Text_KylaIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25A775
gText_Rom_25A775: @ 0x0825A775
	.string "うみは わたしの にわ\nこども だからって てかげん しないわよ!{EOS}"
	.if (. - gText_Rom_25A775) != 0x22
	.error "gText_Rom_25A775 must retain its original byte length"
	.endif
