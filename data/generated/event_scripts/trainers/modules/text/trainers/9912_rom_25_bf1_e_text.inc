	@ data/text/trainers.inc:998 Route111_Text_WiltonRematchIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25BF1E
gText_Rom_25BF1E: @ 0x0825BF1E
	.string "ぼくたちは さらなる たかみを めざして\nここで ポケモンを きたえている\lきみも いっしょに しゅぎょう しよう!$"
	.if (. - gText_Rom_25BF1E) != 0x3b
	.error "gText_Rom_25BF1E must retain its original byte length"
	.endif
