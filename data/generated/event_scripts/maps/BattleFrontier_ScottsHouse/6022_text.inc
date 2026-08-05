	@ data/maps/BattleFrontier_ScottsHouse/scripts.inc:257 BattleFrontier_ScottsHouse_Text_YouveCollectedAllSilverSymbols
	.globl gText_Rom_238D07
gText_Rom_238D07: @ 0x08238D07
	.string "エニシダ『バトルフロンティアを\nたのしんで くれて いるかな?\p……って おおっっ!\pきみの フロンティアパスっ!\nぎんのシンボルが すべて\lそろって いるじゃ ないか!\pすごいなあ きみは おもったとおり\nつよい トレーナー だったんだなあ!\pふつうは こんな ことは しないんだが\nぜひ きねんに これを もらってくれ!\lきみなら つかいこなせる はずだよ……!"
	.byte EOS
	.if (. - gText_Rom_238D07) > 0xb8
	.error "gText_Rom_238D07 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238D07) < 0xb8
	.space 0xb8 - (. - gText_Rom_238D07)
	.endif
