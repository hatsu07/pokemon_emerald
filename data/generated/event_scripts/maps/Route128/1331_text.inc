	@ data/maps/Route128/scripts.inc:262 Route128_Text_StevenWholeWorldWillDrown
	.globl gText_Rom_1EF1C1
gText_Rom_1EF1C1: @ 0x081EF1C1
	.string "……ひどいな\pさっきは はげしい ひでり だったのに\nまた おおあめが ふりはじめている\pこのまま では ホウエンちほう……\nいや せかいじゅうが しずむ!\pこの あめを ふらせている くもは\nルネの じょうくうを ちゅうしんに\lひろがって いるのか……\pいったい あそこで\nなにが おきている!?\pここで あれこれ かんがえるより\nルネに いけば わかるか……{EOS}"
	.if (. - gText_Rom_1EF1C1) > 0xb6
	.error "gText_Rom_1EF1C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EF1C1) < 0xb6
	.space 0xb6 - (. - gText_Rom_1EF1C1)
	.endif
