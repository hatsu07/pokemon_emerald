	@ data/maps/LilycoveCity/scripts.inc:480 LilycoveCity_Text_BrendanShoppingLetsBattle
	.globl gText_Rom_1E09A9
gText_Rom_1E09A9: @ 0x081E09A9
	.string "ユウキ『なんだ {PLAYER}か\pオレ とうさんに たのまれた\nかいものを してたんだ\lべつに ぬいぐるみ なんか かってないよ\pそれよりも ひさしぶりに あったんだ\pどっちが うまく\nポケモン そだてているか\lしょうぶ してやろうか?{EOS}"
	.if (. - gText_Rom_1E09A9) > 0x72
	.error "gText_Rom_1E09A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E09A9) < 0x72
	.space 0x72 - (. - gText_Rom_1E09A9)
	.endif
