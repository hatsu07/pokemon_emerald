	@ data/text/trainers.inc:1952 Route119_Text_DonaldPostBattle
	.globl gText_Rom_25E70B
gText_Rom_25E70B: @ 0x0825E70B
	.string "もっと キミの マネを したい!\nほら はやく うごいてよ!{EOS}"
	.if (. - gText_Rom_25E70B) > 0x1f
	.error "gText_Rom_25E70B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E70B) < 0x1f
	.space 0x1f - (. - gText_Rom_25E70B)
	.endif
