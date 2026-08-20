	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:89 LilycoveCity_CoveLilyMotel_2F_Text_SnoozingPreferBattles
	.globl gText_Rom_205AE0
gText_Rom_205AE0: @ 0x08205AE0
	.string "エニシダ『…… ……\n…… …… ……ズ\p…… …… ……!\nあ ああ {PLAYER}{KUN}\lごめんごめん ひるね してたんだ\pポケモンコンテスト ってのが\nどんな ものか みに きたんだ\lなかなか おもしろそう だけど……\pまあ わたしは やっぱり\nじゅんすいに たたかって つよい\lトレーナーが すき だけどね\pうん {PLAYER}{KUN}は\nジムに コンテストに バトルテント\lなんでも たのしんで くれよ!{EOS}"
	.if (. - gText_Rom_205AE0) > 0xc3
	.error "gText_Rom_205AE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205AE0) < 0xc3
	.space 0xc3 - (. - gText_Rom_205AE0)
	.endif
