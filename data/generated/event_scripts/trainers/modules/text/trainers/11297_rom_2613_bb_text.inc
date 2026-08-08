	@ data/text/trainers.inc:3026 Route128_Text_RubenIntro (+1 aliases)
	.globl gText_Rom_2613BB
gText_Rom_2613BB: @ 0x082613BB
	.string "わたしの ように つよい\nポケモントレーナーは ほかに いない!$"
	.if (. - gText_Rom_2613BB) > 0x21
	.error "gText_Rom_2613BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2613BB) < 0x21
	.space 0x21 - (. - gText_Rom_2613BB)
	.endif
