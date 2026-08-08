	@ data/maps/RustboroCity_CuttersHouse/scripts.inc:24 RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse
	.globl gText_Rom_203DBC
gText_Rom_203DBC: @ 0x08203DBC
	.string "その めつき\nしなやかな みの こなし……\lそして きたえられた ポケモン……\pきみは できる トレーナーだな!\pなにも いわなくて いい\nわたしには わかる わかるのだよ!\pきみならば この ひでんマシン\nうまく つかえるだろう\lさあ えんりょ せずに もっていきたまえ!$"
	.if (. - gText_Rom_203DBC) > 0x8a
	.error "gText_Rom_203DBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203DBC) < 0x8a
	.space 0x8a - (. - gText_Rom_203DBC)
	.endif
