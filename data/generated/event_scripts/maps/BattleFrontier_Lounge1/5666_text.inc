	@ data/maps/BattleFrontier_Lounge1/scripts.inc:162 BattleFrontier_Lounge1_Text_ImpressiveAbility
	.globl gText_Rom_235836
gText_Rom_235836: @ 0x08235836
	.string "…… んー\pこいつは ぜんたいてきに いうと\nそうとう ゆうしゅうな\lのうりょくを もっとるぞ!"
	.byte EOS
	.if (. - gText_Rom_235836) > 0x31
	.error "gText_Rom_235836 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_235836) < 0x31
	.space 0x31 - (. - gText_Rom_235836)
	.endif
