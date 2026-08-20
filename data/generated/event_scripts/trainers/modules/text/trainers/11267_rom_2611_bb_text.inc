	@ data/text/trainers.inc:2981 Route128_Text_IsaiahPostBattle
	.globl gText_Rom_2611BB
gText_Rom_2611BB: @ 0x082611BB
	.string "まけつづけている じんせい ですが\nけっして あきらめませんよ……!{EOS}"
	.if (. - gText_Rom_2611BB) > 0x23
	.error "gText_Rom_2611BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2611BB) < 0x23
	.space 0x23 - (. - gText_Rom_2611BB)
	.endif
