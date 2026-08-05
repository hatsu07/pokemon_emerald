	@ data/text/trainers.inc:893 Route110_Text_KalebIntro (+1 aliases)
	.globl gText_Rom_25BA1A
gText_Rom_25BA1A: @ 0x0825BA1A
	.string "かわいい ポケモンたちが\nたすけあう ところは かわいいぞーーっ!$"
	.if (. - gText_Rom_25BA1A) > 0x22
	.error "gText_Rom_25BA1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BA1A) < 0x22
	.space 0x22 - (. - gText_Rom_25BA1A)
	.endif
