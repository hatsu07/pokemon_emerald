	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:134 gText_BattlePyramidConfirmRetire
	.globl gText_Rom_22D78F
gText_Rom_22D78F: @ 0x0822D78F
	.string "バトルピラミッドの ちょうせんを\nやめて ほんとうに よろしいですか?$"
	.if (. - gText_Rom_22D78F) > 0x24
	.error "gText_Rom_22D78F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D78F) < 0x24
	.space 0x24 - (. - gText_Rom_22D78F)
	.endif
	@ analyzed canonical ROM range 0x0822D7B3-0x0822DA06
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_0822D7B3: @ 0x0822D7B3
	.string "この　だんの　でぐちは\n{ESCAPE}　の　ほうこうに　あるんだよ$"
EventText_JP_0822D7D0: @ 0x0822D7D0
	.string "この　だんの　でぐちは\n{ESCAPE}いの　ほうこうに　あるんだよ$"
EventText_JP_0822D7ED: @ 0x0822D7ED
	.string "この　だんの　でぐちは\n{ESCAPE}うの　ほうこうに　あるんだよ$"
EventText_JP_0822D80A: @ 0x0822D80A
	.string "この　だんの　でぐちは\n{ESCAPE}あの　ほうこうに　あるんだよ$"
EventText_JP_0822D827: @ 0x0822D827
	.string "この　だんの　でぐちは\n{ESCAPE}　の　ほうこうに　あるの$"
EventText_JP_0822D842: @ 0x0822D842
	.string "この　だんの　でぐちは\n{ESCAPE}いの　ほうこうに　あるの$"
EventText_JP_0822D85D: @ 0x0822D85D
	.string "この　だんの　でぐちは\n{ESCAPE}うの　ほうこうに　あるの$"
EventText_JP_0822D878: @ 0x0822D878
	.string "この　だんの　でぐちは\n{ESCAPE}あの　ほうこうに　あるの$"
EventText_JP_0822D893: @ 0x0822D893
	.string "でぐちは\n{ESCAPE}　の　ほうこうに　あるよ$"
EventText_JP_0822D8A7: @ 0x0822D8A7
	.string "でぐちは\n{ESCAPE}いの　ほうこうに　あるよ$"
EventText_JP_0822D8BB: @ 0x0822D8BB
	.string "でぐちは\n{ESCAPE}うの　ほうこうに　あるよ$"
EventText_JP_0822D8CF: @ 0x0822D8CF
	.string "でぐちは\n{ESCAPE}あの　ほうこうに　あるよ$"
EventText_JP_0822D8E3: @ 0x0822D8E3
	.string "この　だんの　でぐちは\n{ESCAPE}　の　ほうこうの　どこかに　あるわ$"
EventText_JP_0822D903: @ 0x0822D903
	.string "この　だんの　でぐちは\n{ESCAPE}いの　ほうこうの　どこかに　あるわ$"
EventText_JP_0822D923: @ 0x0822D923
	.string "この　だんの　でぐちは\n{ESCAPE}うの　ほうこうの　どこかに　あるわ$"
EventText_JP_0822D943: @ 0x0822D943
	.string "この　だんの　でぐちは\n{ESCAPE}あの　ほうこうの　どこかに　あるわ$"
EventText_JP_0822D963: @ 0x0822D963
	.string "でぐちは\n{ESCAPE}　の　ほうこうに　あるぞ$"
EventText_JP_0822D977: @ 0x0822D977
	.string "でぐちは\n{ESCAPE}いの　ほうこうに　あるぞ$"
EventText_JP_0822D98B: @ 0x0822D98B
	.string "でぐちは\n{ESCAPE}うの　ほうこうに　あるぞ$"
EventText_JP_0822D99F: @ 0x0822D99F
	.string "でぐちは\n{ESCAPE}あの　ほうこうに　あるぞ$"
EventText_JP_0822D9B3: @ 0x0822D9B3
	.string "でぐちは\n{ESCAPE}　の　ほうこうに　あるわね$"
EventText_JP_0822D9C8: @ 0x0822D9C8
	.string "でぐちは\n{ESCAPE}いの　ほうこうに　あるわね$"
EventText_JP_0822D9DD: @ 0x0822D9DD
	.string "でぐちは\n{ESCAPE}うの　ほうこうに　あるわね$"
EventText_JP_0822D9F2: @ 0x0822D9F2
	.string "でぐちは\n{ESCAPE}あの　ほうこうに　あるわね$"
