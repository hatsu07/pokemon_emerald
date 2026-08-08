	@ data/maps/BattleFrontier_Lounge1/scripts.inc:159 BattleFrontier_Lounge1_Text_BetterThanAverageAbility
	.globl gText_Rom_235805
gText_Rom_235805: @ 0x08235805
	.string "…… んー\pこいつは ぜんたいてきに いうと\nへいきん いじょうの\lのうりょくを もっとるな……"
	.byte EOS
	.if (. - gText_Rom_235805) > 0x31
	.error "gText_Rom_235805 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_235805) < 0x31
	.space 0x31 - (. - gText_Rom_235805)
	.endif
