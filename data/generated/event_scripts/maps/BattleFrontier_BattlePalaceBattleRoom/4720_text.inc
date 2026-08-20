	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:500 BattleFrontier_BattlePalaceBattleRoom_Text_SpenserFirstIntro
	.globl gText_Rom_22B9E2
gText_Rom_22B9E2: @ 0x0822B9E2
	.string "ウコン『わが み\nつねに ポケモンと ありっ!\pわが こころ\nつねに ポケモンと ありっ!\pわかき トレーナーよ!!\nきさまは ポケモンを\lしんじて おるか?\pきさまは ポケモンを\nしんじぬく ことが できるかっ!\pもろき しんらいの きずな では\nわが きょうだい には かてん!!{EOS}"
	.if (. - gText_Rom_22B9E2) > 0x8f
	.error "gText_Rom_22B9E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B9E2) < 0x8f
	.space 0x8f - (. - gText_Rom_22B9E2)
	.endif
