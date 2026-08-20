	@ data/text/trainers.inc:1946 Route119_Text_DonaldIntro (+1 aliases)
	.globl gText_Rom_25E6DB
gText_Rom_25E6DB: @ 0x0825E6DB
	.string "ようやく であえたね!\nぼくの むしポケモンが あいて するよ!{EOS}"
	.if (. - gText_Rom_25E6DB) > 0x21
	.error "gText_Rom_25E6DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E6DB) < 0x21
	.space 0x21 - (. - gText_Rom_25E6DB)
	.endif
