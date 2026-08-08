	@ data/maps/RustboroCity_Gym/scripts.inc:129 RustboroCity_Gym_Text_GymGuidePostVictory
	.globl gText_Rom_202581
gText_Rom_202581: @ 0x08202581
	.string "うおォ! みごとな しょうり!!\nぼくの おうえんが よかったのか!?\pよし! きみの\nトレーナーカードを みたまえ!\pさっき てにいれた ストーンバッジが\nきちんと きろく されている だろう\pつまり……\pきみは チャンピオンへの かいだんを\nいっぽ のぼったんだ!\pごったましィー!!$"
	.if (. - gText_Rom_202581) > 0x91
	.error "gText_Rom_202581 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202581) < 0x91
	.space 0x91 - (. - gText_Rom_202581)
	.endif
