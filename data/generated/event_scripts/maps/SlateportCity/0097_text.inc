	@ data/maps/SlateportCity/scripts.inc:1162 SlateportCity_Text_OhPlayerWeMadeDiscovery
	.globl gText_Rom_1DD29D
gText_Rom_1DD29D: @ 0x081DD29D
	.string "おっ! {PLAYER}{KUN}\nげんきそう だね!\pこんかいの かいてい ちょうさで\nすごい はっけんを したんだよ!\p128ばん すいどうで\nおおむかしに ぜつめつ したと いわれる\lポケモンの すみかと おもわれる\lかいてい どうくつを みつけた……{EOS}"
	.if (. - gText_Rom_1DD29D) > 0x79
	.error "gText_Rom_1DD29D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD29D) < 0x79
	.space 0x79 - (. - gText_Rom_1DD29D)
	.endif
