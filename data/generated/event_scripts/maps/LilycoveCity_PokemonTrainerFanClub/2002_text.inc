	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:584 LilycoveCity_PokemonTrainerFanClub_Text_BrawlyNoImYourFan
	.globl gText_Rom_208D03
gText_Rom_208D03: @ 0x08208D03
	.string "トウキさま……\pあ！\nちがう ちがう！\pわたしは あくまで あなたの\nファン なんだからね！\pだから あたしの ために\nがんばってよ！{EOS}"
	.if (. - gText_Rom_208D03) > 0x44
	.error "gText_Rom_208D03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208D03) < 0x44
	.space 0x44 - (. - gText_Rom_208D03)
	.endif
