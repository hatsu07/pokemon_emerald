
	@ trainerbattle-cfg:0x22D718 TrainerBattleText_22D756
	.globl BattleFacility_TrainerBattle_PlaceholderText
BattleFacility_TrainerBattle_PlaceholderText: @ 0x0822D756
	.string "テストメッセージ　です{EOS}"
	.if (. - BattleFacility_TrainerBattle_PlaceholderText) > 0xc
	.error "BattleFacility_TrainerBattle_PlaceholderText may not grow beyond its original slot"
	.endif
	.if (. - BattleFacility_TrainerBattle_PlaceholderText) < 0xc
	.space 0xc - (. - BattleFacility_TrainerBattle_PlaceholderText)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:131 gText_BattlePyramidConfirmRest
	.globl gText_BattlePyramidConfirmRest
gText_BattlePyramidConfirmRest: @ 0x0822D762
	.string "バトルピラミッドの できごとを\nレポートに かいて ちゅうだん します\lよろしいですか?{EOS}"
	.if (. - gText_BattlePyramidConfirmRest) > 0x2d
	.error "gText_BattlePyramidConfirmRest may not grow beyond its original slot"
	.endif
	.if (. - gText_BattlePyramidConfirmRest) < 0x2d
	.space 0x2d - (. - gText_BattlePyramidConfirmRest)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:134 gText_BattlePyramidConfirmRetire
	.globl gText_BattlePyramidConfirmRetire
gText_BattlePyramidConfirmRetire: @ 0x0822D78F
	.string "バトルピラミッドの ちょうせんを\nやめて ほんとうに よろしいですか?{EOS}"
	.if (. - gText_BattlePyramidConfirmRetire) > 0x24
	.error "gText_BattlePyramidConfirmRetire may not grow beyond its original slot"
	.endif
	.if (. - gText_BattlePyramidConfirmRetire) < 0x24
	.space 0x24 - (. - gText_BattlePyramidConfirmRetire)
	.endif
	@ analyzed canonical ROM range 0x0822D7B3-0x0822DA06
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_0822D7B3: @ 0x0822D7B3
	.string "この　だんの　でぐちは\n{ESCAPE}　の　ほうこうに　あるんだよ{EOS}"
EventText_JP_0822D7D0: @ 0x0822D7D0
	.string "この　だんの　でぐちは\n{ESCAPE}いの　ほうこうに　あるんだよ{EOS}"
EventText_JP_0822D7ED: @ 0x0822D7ED
	.string "この　だんの　でぐちは\n{ESCAPE}うの　ほうこうに　あるんだよ{EOS}"
EventText_JP_0822D80A: @ 0x0822D80A
	.string "この　だんの　でぐちは\n{ESCAPE}あの　ほうこうに　あるんだよ{EOS}"
.globl EventText_JP_0822D827
EventText_JP_0822D827: @ 0x0822D827
	.string "この　だんの　でぐちは\n{ESCAPE}　の　ほうこうに　あるの{EOS}"
.globl EventText_JP_0822D842
EventText_JP_0822D842: @ 0x0822D842
	.string "この　だんの　でぐちは\n{ESCAPE}いの　ほうこうに　あるの{EOS}"
.globl EventText_JP_0822D85D
EventText_JP_0822D85D: @ 0x0822D85D
	.string "この　だんの　でぐちは\n{ESCAPE}うの　ほうこうに　あるの{EOS}"
.globl EventText_JP_0822D878
EventText_JP_0822D878: @ 0x0822D878
	.string "この　だんの　でぐちは\n{ESCAPE}あの　ほうこうに　あるの{EOS}"
.globl EventText_JP_0822D893
EventText_JP_0822D893: @ 0x0822D893
	.string "でぐちは\n{ESCAPE}　の　ほうこうに　あるよ{EOS}"
.globl EventText_JP_0822D8A7
EventText_JP_0822D8A7: @ 0x0822D8A7
	.string "でぐちは\n{ESCAPE}いの　ほうこうに　あるよ{EOS}"
.globl EventText_JP_0822D8BB
EventText_JP_0822D8BB: @ 0x0822D8BB
	.string "でぐちは\n{ESCAPE}うの　ほうこうに　あるよ{EOS}"
.globl EventText_JP_0822D8CF
EventText_JP_0822D8CF: @ 0x0822D8CF
	.string "でぐちは\n{ESCAPE}あの　ほうこうに　あるよ{EOS}"
.globl EventText_JP_0822D8E3
EventText_JP_0822D8E3: @ 0x0822D8E3
	.string "この　だんの　でぐちは\n{ESCAPE}　の　ほうこうの　どこかに　あるわ{EOS}"
.globl EventText_JP_0822D903
EventText_JP_0822D903: @ 0x0822D903
	.string "この　だんの　でぐちは\n{ESCAPE}いの　ほうこうの　どこかに　あるわ{EOS}"
.globl EventText_JP_0822D923
EventText_JP_0822D923: @ 0x0822D923
	.string "この　だんの　でぐちは\n{ESCAPE}うの　ほうこうの　どこかに　あるわ{EOS}"
.globl EventText_JP_0822D943
EventText_JP_0822D943: @ 0x0822D943
	.string "この　だんの　でぐちは\n{ESCAPE}あの　ほうこうの　どこかに　あるわ{EOS}"
.globl EventText_JP_0822D963
EventText_JP_0822D963: @ 0x0822D963
	.string "でぐちは\n{ESCAPE}　の　ほうこうに　あるぞ{EOS}"
.globl EventText_JP_0822D977
EventText_JP_0822D977: @ 0x0822D977
	.string "でぐちは\n{ESCAPE}いの　ほうこうに　あるぞ{EOS}"
.globl EventText_JP_0822D98B
EventText_JP_0822D98B: @ 0x0822D98B
	.string "でぐちは\n{ESCAPE}うの　ほうこうに　あるぞ{EOS}"
.globl EventText_JP_0822D99F
EventText_JP_0822D99F: @ 0x0822D99F
	.string "でぐちは\n{ESCAPE}あの　ほうこうに　あるぞ{EOS}"
.globl EventText_JP_0822D9B3
EventText_JP_0822D9B3: @ 0x0822D9B3
	.string "でぐちは\n{ESCAPE}　の　ほうこうに　あるわね{EOS}"
.globl EventText_JP_0822D9C8
EventText_JP_0822D9C8: @ 0x0822D9C8
	.string "でぐちは\n{ESCAPE}いの　ほうこうに　あるわね{EOS}"
.globl EventText_JP_0822D9DD
EventText_JP_0822D9DD: @ 0x0822D9DD
	.string "でぐちは\n{ESCAPE}うの　ほうこうに　あるわね{EOS}"
.globl EventText_JP_0822D9F2
EventText_JP_0822D9F2: @ 0x0822D9F2
	.string "でぐちは\n{ESCAPE}あの　ほうこうに　あるわね{EOS}"
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:209 BattlePyramid_Text_EightItemsRemaining1
	.globl BattlePyramid_Text_EightItemsRemaining1
BattlePyramid_Text_EightItemsRemaining1: @ 0x0822DA07
	.string "どうぐを さがしているの?\pどうぐは\nあと 8つ おちているんだよ!{EOS}"
	.if (. - BattlePyramid_Text_EightItemsRemaining1) > 0x23
	.error "BattlePyramid_Text_EightItemsRemaining1 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_EightItemsRemaining1) < 0x23
	.space 0x23 - (. - BattlePyramid_Text_EightItemsRemaining1)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:212 BattlePyramid_Text_SevenItemsRemaining1
	.globl BattlePyramid_Text_SevenItemsRemaining1
BattlePyramid_Text_SevenItemsRemaining1: @ 0x0822DA2A
	.string "どうぐを さがしているの?\pどうぐは\nあと 7つ おちているんだよ!{EOS}"
	.if (. - BattlePyramid_Text_SevenItemsRemaining1) > 0x23
	.error "BattlePyramid_Text_SevenItemsRemaining1 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SevenItemsRemaining1) < 0x23
	.space 0x23 - (. - BattlePyramid_Text_SevenItemsRemaining1)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:215 BattlePyramid_Text_SixItemsRemaining1
	.globl BattlePyramid_Text_SixItemsRemaining1
BattlePyramid_Text_SixItemsRemaining1: @ 0x0822DA4D
	.string "どうぐを さがしているの?\pどうぐは\nあと 6つ おちているんだよ!{EOS}"
	.if (. - BattlePyramid_Text_SixItemsRemaining1) > 0x23
	.error "BattlePyramid_Text_SixItemsRemaining1 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SixItemsRemaining1) < 0x23
	.space 0x23 - (. - BattlePyramid_Text_SixItemsRemaining1)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:218 BattlePyramid_Text_FiveItemsRemaining1
	.globl BattlePyramid_Text_FiveItemsRemaining1
BattlePyramid_Text_FiveItemsRemaining1: @ 0x0822DA70
	.string "どうぐを さがしているの?\pどうぐは\nあと 5つ おちているんだよ!{EOS}"
	.if (. - BattlePyramid_Text_FiveItemsRemaining1) > 0x23
	.error "BattlePyramid_Text_FiveItemsRemaining1 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FiveItemsRemaining1) < 0x23
	.space 0x23 - (. - BattlePyramid_Text_FiveItemsRemaining1)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:221 BattlePyramid_Text_FourItemsRemaining1
	.globl BattlePyramid_Text_FourItemsRemaining1
BattlePyramid_Text_FourItemsRemaining1: @ 0x0822DA93
	.string "どうぐを さがしているの?\pどうぐは\nあと 4つ おちているんだよ!{EOS}"
	.if (. - BattlePyramid_Text_FourItemsRemaining1) > 0x23
	.error "BattlePyramid_Text_FourItemsRemaining1 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FourItemsRemaining1) < 0x23
	.space 0x23 - (. - BattlePyramid_Text_FourItemsRemaining1)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:224 BattlePyramid_Text_ThreeItemsRemaining1
	.globl BattlePyramid_Text_ThreeItemsRemaining1
BattlePyramid_Text_ThreeItemsRemaining1: @ 0x0822DAB6
	.string "どうぐを さがしているの?\pどうぐは\nあと 3つ おちているんだよ!{EOS}"
	.if (. - BattlePyramid_Text_ThreeItemsRemaining1) > 0x23
	.error "BattlePyramid_Text_ThreeItemsRemaining1 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ThreeItemsRemaining1) < 0x23
	.space 0x23 - (. - BattlePyramid_Text_ThreeItemsRemaining1)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:227 BattlePyramid_Text_TwoItemsRemaining1
	.globl BattlePyramid_Text_TwoItemsRemaining1
BattlePyramid_Text_TwoItemsRemaining1: @ 0x0822DAD9
	.string "どうぐを さがしているの?\pどうぐは\nあと 2つ おちているんだよ!{EOS}"
	.if (. - BattlePyramid_Text_TwoItemsRemaining1) > 0x23
	.error "BattlePyramid_Text_TwoItemsRemaining1 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_TwoItemsRemaining1) < 0x23
	.space 0x23 - (. - BattlePyramid_Text_TwoItemsRemaining1)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:230 BattlePyramid_Text_OneItemRemaining1
	.globl BattlePyramid_Text_OneItemRemaining1
BattlePyramid_Text_OneItemRemaining1: @ 0x0822DAFC
	.string "どうぐを さがしているの?\pどうぐは\nあと 1つ おちているんだよ!{EOS}"
	.if (. - BattlePyramid_Text_OneItemRemaining1) > 0x23
	.error "BattlePyramid_Text_OneItemRemaining1 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_OneItemRemaining1) < 0x23
	.space 0x23 - (. - BattlePyramid_Text_OneItemRemaining1)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:233 BattlePyramid_Text_ZeroItemsRemaining1
	.globl BattlePyramid_Text_ZeroItemsRemaining1
BattlePyramid_Text_ZeroItemsRemaining1: @ 0x0822DB1F
	.string "どうぐを さがしているの?\pどうぐは\nもう おちていないんだよ!{EOS}"
	.if (. - BattlePyramid_Text_ZeroItemsRemaining1) > 0x21
	.error "BattlePyramid_Text_ZeroItemsRemaining1 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ZeroItemsRemaining1) < 0x21
	.space 0x21 - (. - BattlePyramid_Text_ZeroItemsRemaining1)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:236 BattlePyramid_Text_EightItemsRemaining2
	.globl BattlePyramid_Text_EightItemsRemaining2
BattlePyramid_Text_EightItemsRemaining2: @ 0x0822DB40
	.string "かった ごほうびに\nヒミツを おしえて あげちゃう!\pここには どうぐが\nあと 8つ おちているの{EOS}"
	.if (. - BattlePyramid_Text_EightItemsRemaining2) > 0x32
	.error "BattlePyramid_Text_EightItemsRemaining2 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_EightItemsRemaining2) < 0x32
	.space 0x32 - (. - BattlePyramid_Text_EightItemsRemaining2)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:239 BattlePyramid_Text_SevenItemsRemaining2
	.globl BattlePyramid_Text_SevenItemsRemaining2
BattlePyramid_Text_SevenItemsRemaining2: @ 0x0822DB72
	.string "かった ごほうびに\nヒミツを おしえて あげちゃう!\pここには どうぐが\nあと 7つ おちているの{EOS}"
	.if (. - BattlePyramid_Text_SevenItemsRemaining2) > 0x32
	.error "BattlePyramid_Text_SevenItemsRemaining2 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SevenItemsRemaining2) < 0x32
	.space 0x32 - (. - BattlePyramid_Text_SevenItemsRemaining2)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:242 BattlePyramid_Text_SixItemsRemaining2
	.globl BattlePyramid_Text_SixItemsRemaining2
BattlePyramid_Text_SixItemsRemaining2: @ 0x0822DBA4
	.string "かった ごほうびに\nヒミツを おしえて あげちゃう!\pここには どうぐが\nあと 6つ おちているの{EOS}"
	.if (. - BattlePyramid_Text_SixItemsRemaining2) > 0x32
	.error "BattlePyramid_Text_SixItemsRemaining2 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SixItemsRemaining2) < 0x32
	.space 0x32 - (. - BattlePyramid_Text_SixItemsRemaining2)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:245 BattlePyramid_Text_FiveItemsRemaining2
	.globl BattlePyramid_Text_FiveItemsRemaining2
BattlePyramid_Text_FiveItemsRemaining2: @ 0x0822DBD6
	.string "かった ごほうびに\nヒミツを おしえて あげちゃう!\pここには どうぐが\nあと 5つ おちているの{EOS}"
	.if (. - BattlePyramid_Text_FiveItemsRemaining2) > 0x32
	.error "BattlePyramid_Text_FiveItemsRemaining2 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FiveItemsRemaining2) < 0x32
	.space 0x32 - (. - BattlePyramid_Text_FiveItemsRemaining2)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:248 BattlePyramid_Text_FourItemsRemaining2
	.globl BattlePyramid_Text_FourItemsRemaining2
BattlePyramid_Text_FourItemsRemaining2: @ 0x0822DC08
	.string "かった ごほうびに\nヒミツを おしえて あげちゃう!\pここには どうぐが\nあと 4つ おちているの{EOS}"
	.if (. - BattlePyramid_Text_FourItemsRemaining2) > 0x32
	.error "BattlePyramid_Text_FourItemsRemaining2 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FourItemsRemaining2) < 0x32
	.space 0x32 - (. - BattlePyramid_Text_FourItemsRemaining2)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:251 BattlePyramid_Text_ThreeItemsRemaining2
	.globl BattlePyramid_Text_ThreeItemsRemaining2
BattlePyramid_Text_ThreeItemsRemaining2: @ 0x0822DC3A
	.string "かった ごほうびに\nヒミツを おしえて あげちゃう!\pここには どうぐが\nあと 3つ おちているの{EOS}"
	.if (. - BattlePyramid_Text_ThreeItemsRemaining2) > 0x32
	.error "BattlePyramid_Text_ThreeItemsRemaining2 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ThreeItemsRemaining2) < 0x32
	.space 0x32 - (. - BattlePyramid_Text_ThreeItemsRemaining2)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:254 BattlePyramid_Text_TwoItemsRemaining2
	.globl BattlePyramid_Text_TwoItemsRemaining2
BattlePyramid_Text_TwoItemsRemaining2: @ 0x0822DC6C
	.string "かった ごほうびに\nヒミツを おしえて あげちゃう!\pここには どうぐが\nあと 2つ おちているの{EOS}"
	.if (. - BattlePyramid_Text_TwoItemsRemaining2) > 0x32
	.error "BattlePyramid_Text_TwoItemsRemaining2 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_TwoItemsRemaining2) < 0x32
	.space 0x32 - (. - BattlePyramid_Text_TwoItemsRemaining2)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:257 BattlePyramid_Text_OneItemRemaining2
	.globl BattlePyramid_Text_OneItemRemaining2
BattlePyramid_Text_OneItemRemaining2: @ 0x0822DC9E
	.string "かった ごほうびに\nヒミツを おしえて あげちゃう!\pここには どうぐが\nあと 1つ おちているの{EOS}"
	.if (. - BattlePyramid_Text_OneItemRemaining2) > 0x32
	.error "BattlePyramid_Text_OneItemRemaining2 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_OneItemRemaining2) < 0x32
	.space 0x32 - (. - BattlePyramid_Text_OneItemRemaining2)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:260 BattlePyramid_Text_ZeroItemsRemaining2
	.globl BattlePyramid_Text_ZeroItemsRemaining2
BattlePyramid_Text_ZeroItemsRemaining2: @ 0x0822DCD0
	.string "かった ごほうびに\nヒミツを おしえて あげちゃう!\pここには どうぐが\nもう おちていないの{EOS}"
	.if (. - BattlePyramid_Text_ZeroItemsRemaining2) > 0x30
	.error "BattlePyramid_Text_ZeroItemsRemaining2 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ZeroItemsRemaining2) < 0x30
	.space 0x30 - (. - BattlePyramid_Text_ZeroItemsRemaining2)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:263 BattlePyramid_Text_EightItemsRemaining3
	.globl BattlePyramid_Text_EightItemsRemaining3
BattlePyramid_Text_EightItemsRemaining3: @ 0x0822DD00
	.string "どうぐは たりている?\pこの だんには\nどうぐが あと 8つほど あるそうだよ!{EOS}"
	.if (. - BattlePyramid_Text_EightItemsRemaining3) > 0x29
	.error "BattlePyramid_Text_EightItemsRemaining3 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_EightItemsRemaining3) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_EightItemsRemaining3)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:266 BattlePyramid_Text_SevenItemsRemaining3
	.globl BattlePyramid_Text_SevenItemsRemaining3
BattlePyramid_Text_SevenItemsRemaining3: @ 0x0822DD29
	.string "どうぐは たりている?\pこの だんには\nどうぐが あと 7つほど あるそうだよ!{EOS}"
	.if (. - BattlePyramid_Text_SevenItemsRemaining3) > 0x29
	.error "BattlePyramid_Text_SevenItemsRemaining3 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SevenItemsRemaining3) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_SevenItemsRemaining3)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:269 BattlePyramid_Text_SixItemsRemaining3
	.globl BattlePyramid_Text_SixItemsRemaining3
BattlePyramid_Text_SixItemsRemaining3: @ 0x0822DD52
	.string "どうぐは たりている?\pこの だんには\nどうぐが あと 6つほど あるそうだよ!{EOS}"
	.if (. - BattlePyramid_Text_SixItemsRemaining3) > 0x29
	.error "BattlePyramid_Text_SixItemsRemaining3 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SixItemsRemaining3) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_SixItemsRemaining3)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:272 BattlePyramid_Text_FiveItemsRemaining3
	.globl BattlePyramid_Text_FiveItemsRemaining3
BattlePyramid_Text_FiveItemsRemaining3: @ 0x0822DD7B
	.string "どうぐは たりている?\pこの だんには\nどうぐが あと 5つほど あるそうだよ!{EOS}"
	.if (. - BattlePyramid_Text_FiveItemsRemaining3) > 0x29
	.error "BattlePyramid_Text_FiveItemsRemaining3 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FiveItemsRemaining3) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_FiveItemsRemaining3)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:275 BattlePyramid_Text_FourItemsRemaining3
	.globl BattlePyramid_Text_FourItemsRemaining3
BattlePyramid_Text_FourItemsRemaining3: @ 0x0822DDA4
	.string "どうぐは たりている?\pこの だんには\nどうぐが あと 4つほど あるそうだよ!{EOS}"
	.if (. - BattlePyramid_Text_FourItemsRemaining3) > 0x29
	.error "BattlePyramid_Text_FourItemsRemaining3 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FourItemsRemaining3) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_FourItemsRemaining3)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:278 BattlePyramid_Text_ThreeItemsRemaining3
	.globl BattlePyramid_Text_ThreeItemsRemaining3
BattlePyramid_Text_ThreeItemsRemaining3: @ 0x0822DDCD
	.string "どうぐは たりている?\pこの だんには\nどうぐが あと 3つほど あるそうだよ!{EOS}"
	.if (. - BattlePyramid_Text_ThreeItemsRemaining3) > 0x29
	.error "BattlePyramid_Text_ThreeItemsRemaining3 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ThreeItemsRemaining3) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_ThreeItemsRemaining3)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:281 BattlePyramid_Text_TwoItemsRemaining3
	.globl BattlePyramid_Text_TwoItemsRemaining3
BattlePyramid_Text_TwoItemsRemaining3: @ 0x0822DDF6
	.string "どうぐは たりている?\pこの だんには\nどうぐが あと 2つほど あるそうだよ!{EOS}"
	.if (. - BattlePyramid_Text_TwoItemsRemaining3) > 0x29
	.error "BattlePyramid_Text_TwoItemsRemaining3 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_TwoItemsRemaining3) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_TwoItemsRemaining3)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:284 BattlePyramid_Text_OneItemRemaining3
	.globl BattlePyramid_Text_OneItemRemaining3
BattlePyramid_Text_OneItemRemaining3: @ 0x0822DE1F
	.string "どうぐは たりている?\pこの だんには\nどうぐが あと 1つだけ あるそうだよ!{EOS}"
	.if (. - BattlePyramid_Text_OneItemRemaining3) > 0x29
	.error "BattlePyramid_Text_OneItemRemaining3 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_OneItemRemaining3) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_OneItemRemaining3)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:287 BattlePyramid_Text_ZeroItemsRemaining3
	.globl BattlePyramid_Text_ZeroItemsRemaining3
BattlePyramid_Text_ZeroItemsRemaining3: @ 0x0822DE48
	.string "どうぐは たりている?\pこの だんには\nもう どうぐが ないらしいから\lきを つけてね!{EOS}"
	.if (. - BattlePyramid_Text_ZeroItemsRemaining3) > 0x2d
	.error "BattlePyramid_Text_ZeroItemsRemaining3 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ZeroItemsRemaining3) < 0x2d
	.space 0x2d - (. - BattlePyramid_Text_ZeroItemsRemaining3)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:290 BattlePyramid_Text_EightItemsRemaining4
	.globl BattlePyramid_Text_EightItemsRemaining4
BattlePyramid_Text_EightItemsRemaining4: @ 0x0822DE75
	.string "つよい あなたに ヒントを あげる!\pどうぐは\nあと 8つ おちているらしいわ!{EOS}"
	.if (. - BattlePyramid_Text_EightItemsRemaining4) > 0x29
	.error "BattlePyramid_Text_EightItemsRemaining4 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_EightItemsRemaining4) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_EightItemsRemaining4)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:293 BattlePyramid_Text_SevenItemsRemaining4
	.globl BattlePyramid_Text_SevenItemsRemaining4
BattlePyramid_Text_SevenItemsRemaining4: @ 0x0822DE9E
	.string "つよい あなたに ヒントを あげる!\pどうぐは\nあと 7つ おちているらしいわ!{EOS}"
	.if (. - BattlePyramid_Text_SevenItemsRemaining4) > 0x29
	.error "BattlePyramid_Text_SevenItemsRemaining4 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SevenItemsRemaining4) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_SevenItemsRemaining4)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:296 BattlePyramid_Text_SixItemsRemaining4
	.globl BattlePyramid_Text_SixItemsRemaining4
BattlePyramid_Text_SixItemsRemaining4: @ 0x0822DEC7
	.string "つよい あなたに ヒントを あげる!\pどうぐは\nあと 6つ おちているらしいわ!{EOS}"
	.if (. - BattlePyramid_Text_SixItemsRemaining4) > 0x29
	.error "BattlePyramid_Text_SixItemsRemaining4 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SixItemsRemaining4) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_SixItemsRemaining4)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:299 BattlePyramid_Text_FiveItemsRemaining4
	.globl BattlePyramid_Text_FiveItemsRemaining4
BattlePyramid_Text_FiveItemsRemaining4: @ 0x0822DEF0
	.string "つよい あなたに ヒントを あげる!\pどうぐは\nあと 5つ おちているらしいわ!{EOS}"
	.if (. - BattlePyramid_Text_FiveItemsRemaining4) > 0x29
	.error "BattlePyramid_Text_FiveItemsRemaining4 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FiveItemsRemaining4) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_FiveItemsRemaining4)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:302 BattlePyramid_Text_FourItemsRemaining4
	.globl BattlePyramid_Text_FourItemsRemaining4
BattlePyramid_Text_FourItemsRemaining4: @ 0x0822DF19
	.string "つよい あなたに ヒントを あげる!\pどうぐは\nあと 4つ おちているらしいわ!{EOS}"
	.if (. - BattlePyramid_Text_FourItemsRemaining4) > 0x29
	.error "BattlePyramid_Text_FourItemsRemaining4 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FourItemsRemaining4) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_FourItemsRemaining4)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:305 BattlePyramid_Text_ThreeItemsRemaining4
	.globl BattlePyramid_Text_ThreeItemsRemaining4
BattlePyramid_Text_ThreeItemsRemaining4: @ 0x0822DF42
	.string "つよい あなたに ヒントを あげる!\pどうぐは\nあと 3つ おちているらしいわ!{EOS}"
	.if (. - BattlePyramid_Text_ThreeItemsRemaining4) > 0x29
	.error "BattlePyramid_Text_ThreeItemsRemaining4 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ThreeItemsRemaining4) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_ThreeItemsRemaining4)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:308 BattlePyramid_Text_TwoItemsRemaining4
	.globl BattlePyramid_Text_TwoItemsRemaining4
BattlePyramid_Text_TwoItemsRemaining4: @ 0x0822DF6B
	.string "つよい あなたに ヒントを あげる!\pどうぐは\nあと 2つ おちているらしいわ!{EOS}"
	.if (. - BattlePyramid_Text_TwoItemsRemaining4) > 0x29
	.error "BattlePyramid_Text_TwoItemsRemaining4 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_TwoItemsRemaining4) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_TwoItemsRemaining4)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:311 BattlePyramid_Text_OneItemRemaining4
	.globl BattlePyramid_Text_OneItemRemaining4
BattlePyramid_Text_OneItemRemaining4: @ 0x0822DF94
	.string "つよい あなたに ヒントを あげる!\pどうぐは\nあと 1つ おちているらしいわ!{EOS}"
	.if (. - BattlePyramid_Text_OneItemRemaining4) > 0x29
	.error "BattlePyramid_Text_OneItemRemaining4 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_OneItemRemaining4) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_OneItemRemaining4)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:314 BattlePyramid_Text_ZeroItemsRemaining4
	.globl BattlePyramid_Text_ZeroItemsRemaining4
BattlePyramid_Text_ZeroItemsRemaining4: @ 0x0822DFBD
	.string "つよい あなたに ヒントを あげる!\pどうぐは\nもう 1つも おちてないらしいわ!{EOS}"
	.if (. - BattlePyramid_Text_ZeroItemsRemaining4) > 0x2a
	.error "BattlePyramid_Text_ZeroItemsRemaining4 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ZeroItemsRemaining4) < 0x2a
	.space 0x2a - (. - BattlePyramid_Text_ZeroItemsRemaining4)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:317 BattlePyramid_Text_EightItemsRemaining5
	.globl BattlePyramid_Text_EightItemsRemaining5
BattlePyramid_Text_EightItemsRemaining5: @ 0x0822DFE7
	.string "ピラミッドの この だんには\nどうぐが 8つは あるそうだ……{EOS}"
	.if (. - BattlePyramid_Text_EightItemsRemaining5) > 0x20
	.error "BattlePyramid_Text_EightItemsRemaining5 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_EightItemsRemaining5) < 0x20
	.space 0x20 - (. - BattlePyramid_Text_EightItemsRemaining5)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:320 BattlePyramid_Text_SevenItemsRemaining5
	.globl BattlePyramid_Text_SevenItemsRemaining5
BattlePyramid_Text_SevenItemsRemaining5: @ 0x0822E007
	.string "ピラミッドの この だんには\nどうぐが 7つは あるそうだ……{EOS}"
	.if (. - BattlePyramid_Text_SevenItemsRemaining5) > 0x20
	.error "BattlePyramid_Text_SevenItemsRemaining5 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SevenItemsRemaining5) < 0x20
	.space 0x20 - (. - BattlePyramid_Text_SevenItemsRemaining5)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:323 BattlePyramid_Text_SixItemsRemaining5
	.globl BattlePyramid_Text_SixItemsRemaining5
BattlePyramid_Text_SixItemsRemaining5: @ 0x0822E027
	.string "ピラミッドの この だんには\nどうぐが 6つは あるそうだ……{EOS}"
	.if (. - BattlePyramid_Text_SixItemsRemaining5) > 0x20
	.error "BattlePyramid_Text_SixItemsRemaining5 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SixItemsRemaining5) < 0x20
	.space 0x20 - (. - BattlePyramid_Text_SixItemsRemaining5)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:326 BattlePyramid_Text_FiveItemsRemaining5
	.globl BattlePyramid_Text_FiveItemsRemaining5
BattlePyramid_Text_FiveItemsRemaining5: @ 0x0822E047
	.string "ピラミッドの この だんには\nどうぐが 5つは あるそうだ……{EOS}"
	.if (. - BattlePyramid_Text_FiveItemsRemaining5) > 0x20
	.error "BattlePyramid_Text_FiveItemsRemaining5 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FiveItemsRemaining5) < 0x20
	.space 0x20 - (. - BattlePyramid_Text_FiveItemsRemaining5)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:329 BattlePyramid_Text_FourItemsRemaining5
	.globl BattlePyramid_Text_FourItemsRemaining5
BattlePyramid_Text_FourItemsRemaining5: @ 0x0822E067
	.string "ピラミッドの この だんには\nどうぐが 4つは あるそうだ……{EOS}"
	.if (. - BattlePyramid_Text_FourItemsRemaining5) > 0x20
	.error "BattlePyramid_Text_FourItemsRemaining5 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FourItemsRemaining5) < 0x20
	.space 0x20 - (. - BattlePyramid_Text_FourItemsRemaining5)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:332 BattlePyramid_Text_ThreeItemsRemaining5
	.globl BattlePyramid_Text_ThreeItemsRemaining5
BattlePyramid_Text_ThreeItemsRemaining5: @ 0x0822E087
	.string "ピラミッドの この だんには\nどうぐが 3つは あるそうだ……{EOS}"
	.if (. - BattlePyramid_Text_ThreeItemsRemaining5) > 0x20
	.error "BattlePyramid_Text_ThreeItemsRemaining5 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ThreeItemsRemaining5) < 0x20
	.space 0x20 - (. - BattlePyramid_Text_ThreeItemsRemaining5)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:335 BattlePyramid_Text_TwoItemsRemaining5
	.globl BattlePyramid_Text_TwoItemsRemaining5
BattlePyramid_Text_TwoItemsRemaining5: @ 0x0822E0A7
	.string "ピラミッドの この だんには\nどうぐが 2つは あるそうだ……{EOS}"
	.if (. - BattlePyramid_Text_TwoItemsRemaining5) > 0x20
	.error "BattlePyramid_Text_TwoItemsRemaining5 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_TwoItemsRemaining5) < 0x20
	.space 0x20 - (. - BattlePyramid_Text_TwoItemsRemaining5)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:338 BattlePyramid_Text_OneItemRemaining5
	.globl BattlePyramid_Text_OneItemRemaining5
BattlePyramid_Text_OneItemRemaining5: @ 0x0822E0C7
	.string "ピラミッドの この だんには\nどうぐが 1つは あるそうだ……{EOS}"
	.if (. - BattlePyramid_Text_OneItemRemaining5) > 0x20
	.error "BattlePyramid_Text_OneItemRemaining5 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_OneItemRemaining5) < 0x20
	.space 0x20 - (. - BattlePyramid_Text_OneItemRemaining5)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:341 BattlePyramid_Text_ZeroItemsRemaining5
	.globl BattlePyramid_Text_ZeroItemsRemaining5
BattlePyramid_Text_ZeroItemsRemaining5: @ 0x0822E0E7
	.string "ピラミッドの この だんには\nどうぐは ないそうだ……{EOS}"
	.if (. - BattlePyramid_Text_ZeroItemsRemaining5) > 0x1c
	.error "BattlePyramid_Text_ZeroItemsRemaining5 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ZeroItemsRemaining5) < 0x1c
	.space 0x1c - (. - BattlePyramid_Text_ZeroItemsRemaining5)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:344 BattlePyramid_Text_EightItemsRemaining6
	.globl BattlePyramid_Text_EightItemsRemaining6
BattlePyramid_Text_EightItemsRemaining6: @ 0x0822E103
	.string "どうぐは もっているかい?\pこの だんには\nどうぐが あと 8つは あるそうだよ{EOS}"
	.if (. - BattlePyramid_Text_EightItemsRemaining6) > 0x29
	.error "BattlePyramid_Text_EightItemsRemaining6 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_EightItemsRemaining6) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_EightItemsRemaining6)
	.endif

	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:347 BattlePyramid_Text_SevenItemsRemaining6
	.globl BattlePyramid_Text_SevenItemsRemaining6
BattlePyramid_Text_SevenItemsRemaining6: @ 0x0822E12C
	.string "どうぐは もっているかい?\pこの だんには\nどうぐが あと 7つは あるそうだよ"
	.byte EOS
	.if (. - BattlePyramid_Text_SevenItemsRemaining6) > 0x29
	.error "BattlePyramid_Text_SevenItemsRemaining6 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SevenItemsRemaining6) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_SevenItemsRemaining6)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:350 BattlePyramid_Text_SixItemsRemaining6
	.globl BattlePyramid_Text_SixItemsRemaining6
BattlePyramid_Text_SixItemsRemaining6: @ 0x0822E155
	.string "どうぐは もっているかい?\pこの だんには\nどうぐが あと 6つは あるそうだよ"
	.byte EOS
	.if (. - BattlePyramid_Text_SixItemsRemaining6) > 0x29
	.error "BattlePyramid_Text_SixItemsRemaining6 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SixItemsRemaining6) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_SixItemsRemaining6)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:353 BattlePyramid_Text_FiveItemsRemaining6
	.globl BattlePyramid_Text_FiveItemsRemaining6
BattlePyramid_Text_FiveItemsRemaining6: @ 0x0822E17E
	.string "どうぐは もっているかい?\pこの だんには\nどうぐが あと 5つは あるそうだよ"
	.byte EOS
	.if (. - BattlePyramid_Text_FiveItemsRemaining6) > 0x29
	.error "BattlePyramid_Text_FiveItemsRemaining6 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FiveItemsRemaining6) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_FiveItemsRemaining6)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:356 BattlePyramid_Text_FourItemsRemaining6
	.globl BattlePyramid_Text_FourItemsRemaining6
BattlePyramid_Text_FourItemsRemaining6: @ 0x0822E1A7
	.string "どうぐは もっているかい?\pこの だんには\nどうぐが あと 4つは あるそうだよ"
	.byte EOS
	.if (. - BattlePyramid_Text_FourItemsRemaining6) > 0x29
	.error "BattlePyramid_Text_FourItemsRemaining6 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FourItemsRemaining6) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_FourItemsRemaining6)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:359 BattlePyramid_Text_ThreeItemsRemaining6
	.globl BattlePyramid_Text_ThreeItemsRemaining6
BattlePyramid_Text_ThreeItemsRemaining6: @ 0x0822E1D0
	.string "どうぐは もっているかい?\pこの だんには\nどうぐが あと 3つは あるそうだよ"
	.byte EOS
	.if (. - BattlePyramid_Text_ThreeItemsRemaining6) > 0x29
	.error "BattlePyramid_Text_ThreeItemsRemaining6 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ThreeItemsRemaining6) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_ThreeItemsRemaining6)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:362 BattlePyramid_Text_TwoItemsRemaining6
	.globl BattlePyramid_Text_TwoItemsRemaining6
BattlePyramid_Text_TwoItemsRemaining6: @ 0x0822E1F9
	.string "どうぐは もっているかい?\pこの だんには\nどうぐが あと 2つは あるそうだよ"
	.byte EOS
	.if (. - BattlePyramid_Text_TwoItemsRemaining6) > 0x29
	.error "BattlePyramid_Text_TwoItemsRemaining6 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_TwoItemsRemaining6) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_TwoItemsRemaining6)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:365 BattlePyramid_Text_OneItemRemaining6
	.globl BattlePyramid_Text_OneItemRemaining6
BattlePyramid_Text_OneItemRemaining6: @ 0x0822E222
	.string "どうぐは もっているかい?\pこの だんには\nどうぐが あと 1つは あるそうだよ"
	.byte EOS
	.if (. - BattlePyramid_Text_OneItemRemaining6) > 0x29
	.error "BattlePyramid_Text_OneItemRemaining6 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_OneItemRemaining6) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_OneItemRemaining6)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:368 BattlePyramid_Text_ZeroItemsRemaining6
	.globl BattlePyramid_Text_ZeroItemsRemaining6
BattlePyramid_Text_ZeroItemsRemaining6: @ 0x0822E24B
	.string "どうぐは もっているかい?\pこの だんには\nどうぐが もう ないそうだよ"
	.byte EOS
	.if (. - BattlePyramid_Text_ZeroItemsRemaining6) > 0x25
	.error "BattlePyramid_Text_ZeroItemsRemaining6 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ZeroItemsRemaining6) < 0x25
	.space 0x25 - (. - BattlePyramid_Text_ZeroItemsRemaining6)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:371 BattlePyramid_Text_SevenTrainersRemaining1
	.globl BattlePyramid_Text_SevenTrainersRemaining1
BattlePyramid_Text_SevenTrainersRemaining1: @ 0x0822E270
	.string "とっても つよかったよー!!\pでも つよい トレーナーは\nまだまだ 7にんも いるからねー!"
	.byte EOS
	.if (. - BattlePyramid_Text_SevenTrainersRemaining1) > 0x2f
	.error "BattlePyramid_Text_SevenTrainersRemaining1 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SevenTrainersRemaining1) < 0x2f
	.space 0x2f - (. - BattlePyramid_Text_SevenTrainersRemaining1)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:374 BattlePyramid_Text_SixTrainersRemaining1
	.globl BattlePyramid_Text_SixTrainersRemaining1
BattlePyramid_Text_SixTrainersRemaining1: @ 0x0822E29F
	.string "とっても つよかったよー!!\pでも つよい トレーナーは\nまだまだ 6にんも いるからねー!"
	.byte EOS
	.if (. - BattlePyramid_Text_SixTrainersRemaining1) > 0x2f
	.error "BattlePyramid_Text_SixTrainersRemaining1 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SixTrainersRemaining1) < 0x2f
	.space 0x2f - (. - BattlePyramid_Text_SixTrainersRemaining1)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:377 BattlePyramid_Text_FiveTrainersRemaining1
	.globl BattlePyramid_Text_FiveTrainersRemaining1
BattlePyramid_Text_FiveTrainersRemaining1: @ 0x0822E2CE
	.string "とっても つよかったよー!!\pでも つよい トレーナーは\nまだまだ 5にんも いるからねー!"
	.byte EOS
	.if (. - BattlePyramid_Text_FiveTrainersRemaining1) > 0x2f
	.error "BattlePyramid_Text_FiveTrainersRemaining1 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FiveTrainersRemaining1) < 0x2f
	.space 0x2f - (. - BattlePyramid_Text_FiveTrainersRemaining1)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:380 BattlePyramid_Text_FourTrainersRemaining1
	.globl BattlePyramid_Text_FourTrainersRemaining1
BattlePyramid_Text_FourTrainersRemaining1: @ 0x0822E2FD
	.string "とっても つよかったよー!!\pでも つよい トレーナーは\nまだまだ 4にんも いるからねー!"
	.byte EOS
	.if (. - BattlePyramid_Text_FourTrainersRemaining1) > 0x2f
	.error "BattlePyramid_Text_FourTrainersRemaining1 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FourTrainersRemaining1) < 0x2f
	.space 0x2f - (. - BattlePyramid_Text_FourTrainersRemaining1)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:383 BattlePyramid_Text_ThreeTrainersRemaining1
	.globl BattlePyramid_Text_ThreeTrainersRemaining1
BattlePyramid_Text_ThreeTrainersRemaining1: @ 0x0822E32C
	.string "とっても つよかったよー!!\pでも つよい トレーナーは\nまだまだ 3にんも いるからねー!"
	.byte EOS
	.if (. - BattlePyramid_Text_ThreeTrainersRemaining1) > 0x2f
	.error "BattlePyramid_Text_ThreeTrainersRemaining1 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ThreeTrainersRemaining1) < 0x2f
	.space 0x2f - (. - BattlePyramid_Text_ThreeTrainersRemaining1)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:386 BattlePyramid_Text_TwoTrainersRemaining1 (+1 aliases)
	.globl BattlePyramid_Text_TwoTrainersRemaining1
BattlePyramid_Text_TwoTrainersRemaining1: @ 0x0822E35B
	.string "とっても つよかったよー!!\pでも つよい トレーナーは\nまだ 2にん いるからねー!"
	.byte EOS
	.if (. - BattlePyramid_Text_TwoTrainersRemaining1) > 0x2c
	.error "BattlePyramid_Text_TwoTrainersRemaining1 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_TwoTrainersRemaining1) < 0x2c
	.space 0x2c - (. - BattlePyramid_Text_TwoTrainersRemaining1)
	.endif
	@ Embedded ROM bytes: file offset 0x22E387, size 0x2C
	@ semanticized-mass: charmap string (44 bytes including EOS)
	.string "とっても　つよかったよ_！！\pでも　つよい　トレ_ナ_は\nまだ　1にん　いるからね_！"
	.byte EOS
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:392 BattlePyramid_Text_ZeroTrainersRemaining1
	.globl BattlePyramid_Text_ZeroTrainersRemaining1
BattlePyramid_Text_ZeroTrainersRemaining1: @ 0x0822E3B3
	.string "とっても つよかったよー!!\pもう だれも\nかてる ひとは いないよー!!"
	.byte EOS
	.if (. - BattlePyramid_Text_ZeroTrainersRemaining1) > 0x26
	.error "BattlePyramid_Text_ZeroTrainersRemaining1 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ZeroTrainersRemaining1) < 0x26
	.space 0x26 - (. - BattlePyramid_Text_ZeroTrainersRemaining1)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:395 BattlePyramid_Text_SevenTrainersRemaining2
	.globl BattlePyramid_Text_SevenTrainersRemaining2
BattlePyramid_Text_SevenTrainersRemaining2: @ 0x0822E3D9
	.string "くやしいー!\pでも あと 7にん いる トレーナーが\nきっと たおしてくれるわ"
	.byte EOS
	.if (. - BattlePyramid_Text_SevenTrainersRemaining2) > 0x28
	.error "BattlePyramid_Text_SevenTrainersRemaining2 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SevenTrainersRemaining2) < 0x28
	.space 0x28 - (. - BattlePyramid_Text_SevenTrainersRemaining2)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:398 BattlePyramid_Text_SixTrainersRemaining2
	.globl BattlePyramid_Text_SixTrainersRemaining2
BattlePyramid_Text_SixTrainersRemaining2: @ 0x0822E401
	.string "くやしいー!\pでも あと 6にん いる トレーナーが\nきっと たおしてくれるわ"
	.byte EOS
	.if (. - BattlePyramid_Text_SixTrainersRemaining2) > 0x28
	.error "BattlePyramid_Text_SixTrainersRemaining2 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SixTrainersRemaining2) < 0x28
	.space 0x28 - (. - BattlePyramid_Text_SixTrainersRemaining2)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:401 BattlePyramid_Text_FiveTrainersRemaining2
	.globl BattlePyramid_Text_FiveTrainersRemaining2
BattlePyramid_Text_FiveTrainersRemaining2: @ 0x0822E429
	.string "くやしいー!\pでも あと 5にん いる トレーナーが\nきっと たおしてくれるわ"
	.byte EOS
	.if (. - BattlePyramid_Text_FiveTrainersRemaining2) > 0x28
	.error "BattlePyramid_Text_FiveTrainersRemaining2 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FiveTrainersRemaining2) < 0x28
	.space 0x28 - (. - BattlePyramid_Text_FiveTrainersRemaining2)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:404 BattlePyramid_Text_FourTrainersRemaining2
	.globl BattlePyramid_Text_FourTrainersRemaining2
BattlePyramid_Text_FourTrainersRemaining2: @ 0x0822E451
	.string "くやしいー!\pでも あと 4にん いる トレーナーが\nきっと たおしてくれるわ"
	.byte EOS
	.if (. - BattlePyramid_Text_FourTrainersRemaining2) > 0x28
	.error "BattlePyramid_Text_FourTrainersRemaining2 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FourTrainersRemaining2) < 0x28
	.space 0x28 - (. - BattlePyramid_Text_FourTrainersRemaining2)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:407 BattlePyramid_Text_ThreeTrainersRemaining2
	.globl BattlePyramid_Text_ThreeTrainersRemaining2
BattlePyramid_Text_ThreeTrainersRemaining2: @ 0x0822E479
	.string "くやしいー!\pでも あと 3にん いる トレーナーが\nきっと たおしてくれるわ"
	.byte EOS
	.if (. - BattlePyramid_Text_ThreeTrainersRemaining2) > 0x28
	.error "BattlePyramid_Text_ThreeTrainersRemaining2 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ThreeTrainersRemaining2) < 0x28
	.space 0x28 - (. - BattlePyramid_Text_ThreeTrainersRemaining2)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:410 BattlePyramid_Text_TwoTrainersRemaining2
	.globl BattlePyramid_Text_TwoTrainersRemaining2
BattlePyramid_Text_TwoTrainersRemaining2: @ 0x0822E4A1
	.string "くやしいー!\pでも あと 2にん いる トレーナーが\nきっと たおしてくれるわ"
	.byte EOS
	.if (. - BattlePyramid_Text_TwoTrainersRemaining2) > 0x28
	.error "BattlePyramid_Text_TwoTrainersRemaining2 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_TwoTrainersRemaining2) < 0x28
	.space 0x28 - (. - BattlePyramid_Text_TwoTrainersRemaining2)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:413 BattlePyramid_Text_OneTrainersRemaining2
	.globl BattlePyramid_Text_OneTrainersRemaining2
BattlePyramid_Text_OneTrainersRemaining2: @ 0x0822E4C9
	.string "くやしいー!\pでも あと 1にん いる トレーナーが\nきっと たおしてくれるわ"
	.byte EOS
	.if (. - BattlePyramid_Text_OneTrainersRemaining2) > 0x28
	.error "BattlePyramid_Text_OneTrainersRemaining2 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_OneTrainersRemaining2) < 0x28
	.space 0x28 - (. - BattlePyramid_Text_OneTrainersRemaining2)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:416 BattlePyramid_Text_ZeroTrainersRemaining2
	.globl BattlePyramid_Text_ZeroTrainersRemaining2
BattlePyramid_Text_ZeroTrainersRemaining2: @ 0x0822E4F1
	.string "くやしいー!\pでも もう たたかえる\nトレーナーが いないのー"
	.byte EOS
	.if (. - BattlePyramid_Text_ZeroTrainersRemaining2) > 0x20
	.error "BattlePyramid_Text_ZeroTrainersRemaining2 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ZeroTrainersRemaining2) < 0x20
	.space 0x20 - (. - BattlePyramid_Text_ZeroTrainersRemaining2)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:419 BattlePyramid_Text_SevenTrainersRemaining3
	.globl BattlePyramid_Text_SevenTrainersRemaining3
BattlePyramid_Text_SevenTrainersRemaining3: @ 0x0822E511
	.string "やるねー!\pでも この だんに あと 7にんも いる\nトレーナーを たおせるかな?"
	.byte EOS
	.if (. - BattlePyramid_Text_SevenTrainersRemaining3) > 0x2a
	.error "BattlePyramid_Text_SevenTrainersRemaining3 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SevenTrainersRemaining3) < 0x2a
	.space 0x2a - (. - BattlePyramid_Text_SevenTrainersRemaining3)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:422 BattlePyramid_Text_SixTrainersRemaining3
	.globl BattlePyramid_Text_SixTrainersRemaining3
BattlePyramid_Text_SixTrainersRemaining3: @ 0x0822E53B
	.string "やるねー!\pでも この だんに あと 6にんも いる\nトレーナーを たおせるかな?"
	.byte EOS
	.if (. - BattlePyramid_Text_SixTrainersRemaining3) > 0x2a
	.error "BattlePyramid_Text_SixTrainersRemaining3 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SixTrainersRemaining3) < 0x2a
	.space 0x2a - (. - BattlePyramid_Text_SixTrainersRemaining3)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:425 BattlePyramid_Text_FiveTrainersRemaining3
	.globl BattlePyramid_Text_FiveTrainersRemaining3
BattlePyramid_Text_FiveTrainersRemaining3: @ 0x0822E565
	.string "やるねー!\pでも この だんに あと 5にんも いる\nトレーナーを たおせるかな?"
	.byte EOS
	.if (. - BattlePyramid_Text_FiveTrainersRemaining3) > 0x2a
	.error "BattlePyramid_Text_FiveTrainersRemaining3 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FiveTrainersRemaining3) < 0x2a
	.space 0x2a - (. - BattlePyramid_Text_FiveTrainersRemaining3)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:428 BattlePyramid_Text_FourTrainersRemaining3
	.globl BattlePyramid_Text_FourTrainersRemaining3
BattlePyramid_Text_FourTrainersRemaining3: @ 0x0822E58F
	.string "やるねー!\pでも この だんに あと 4にん いる\nトレーナーを たおせるかな?"
	.byte EOS
	.if (. - BattlePyramid_Text_FourTrainersRemaining3) > 0x29
	.error "BattlePyramid_Text_FourTrainersRemaining3 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FourTrainersRemaining3) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_FourTrainersRemaining3)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:431 BattlePyramid_Text_ThreeTrainersRemaining3
	.globl BattlePyramid_Text_ThreeTrainersRemaining3
BattlePyramid_Text_ThreeTrainersRemaining3: @ 0x0822E5B8
	.string "やるねー!\pでも この だんに あと 3にん いる\nトレーナーを たおせるかな?"
	.byte EOS
	.if (. - BattlePyramid_Text_ThreeTrainersRemaining3) > 0x29
	.error "BattlePyramid_Text_ThreeTrainersRemaining3 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ThreeTrainersRemaining3) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_ThreeTrainersRemaining3)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:434 BattlePyramid_Text_TwoTrainersRemaining3
	.globl BattlePyramid_Text_TwoTrainersRemaining3
BattlePyramid_Text_TwoTrainersRemaining3: @ 0x0822E5E1
	.string "やるねー!\pでも この だんに あと 2にん いる\nトレーナーを たおせるかな?"
	.byte EOS
	.if (. - BattlePyramid_Text_TwoTrainersRemaining3) > 0x29
	.error "BattlePyramid_Text_TwoTrainersRemaining3 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_TwoTrainersRemaining3) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_TwoTrainersRemaining3)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:437 BattlePyramid_Text_OneTrainersRemaining3
	.globl BattlePyramid_Text_OneTrainersRemaining3
BattlePyramid_Text_OneTrainersRemaining3: @ 0x0822E60A
	.string "やるねー!\pでも この だんに あと 1にん いる\nトレーナーを たおせるかな?"
	.byte EOS
	.if (. - BattlePyramid_Text_OneTrainersRemaining3) > 0x29
	.error "BattlePyramid_Text_OneTrainersRemaining3 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_OneTrainersRemaining3) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_OneTrainersRemaining3)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:440 BattlePyramid_Text_ZeroTrainersRemaining3
	.globl BattlePyramid_Text_ZeroTrainersRemaining3
BattlePyramid_Text_ZeroTrainersRemaining3: @ 0x0822E633
	.string "やるねー!\pこの だんには たたかえる トレーナーは\nもう だれも いないよ"
	.byte EOS
	.if (. - BattlePyramid_Text_ZeroTrainersRemaining3) > 0x27
	.error "BattlePyramid_Text_ZeroTrainersRemaining3 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ZeroTrainersRemaining3) < 0x27
	.space 0x27 - (. - BattlePyramid_Text_ZeroTrainersRemaining3)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:443 BattlePyramid_Text_SevenTrainersRemaining4
	.globl BattlePyramid_Text_SevenTrainersRemaining4
BattlePyramid_Text_SevenTrainersRemaining4: @ 0x0822E65A
	.string "あなたなら まだ たたかっていない\n7にんの トレーナーを たおせるかも……"
	.byte EOS
	.if (. - BattlePyramid_Text_SevenTrainersRemaining4) > 0x27
	.error "BattlePyramid_Text_SevenTrainersRemaining4 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SevenTrainersRemaining4) < 0x27
	.space 0x27 - (. - BattlePyramid_Text_SevenTrainersRemaining4)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:446 BattlePyramid_Text_SixTrainersRemaining4
	.globl BattlePyramid_Text_SixTrainersRemaining4
BattlePyramid_Text_SixTrainersRemaining4: @ 0x0822E681
	.string "あなたなら まだ たたかっていない\n6にんの トレーナーを たおせるかも……"
	.byte EOS
	.if (. - BattlePyramid_Text_SixTrainersRemaining4) > 0x27
	.error "BattlePyramid_Text_SixTrainersRemaining4 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SixTrainersRemaining4) < 0x27
	.space 0x27 - (. - BattlePyramid_Text_SixTrainersRemaining4)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:449 BattlePyramid_Text_FiveTrainersRemaining4
	.globl BattlePyramid_Text_FiveTrainersRemaining4
BattlePyramid_Text_FiveTrainersRemaining4: @ 0x0822E6A8
	.string "あなたなら まだ たたかっていない\n5にんの トレーナーを たおせるかも……"
	.byte EOS
	.if (. - BattlePyramid_Text_FiveTrainersRemaining4) > 0x27
	.error "BattlePyramid_Text_FiveTrainersRemaining4 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FiveTrainersRemaining4) < 0x27
	.space 0x27 - (. - BattlePyramid_Text_FiveTrainersRemaining4)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:452 BattlePyramid_Text_FourTrainersRemaining4
	.globl BattlePyramid_Text_FourTrainersRemaining4
BattlePyramid_Text_FourTrainersRemaining4: @ 0x0822E6CF
	.string "あなたなら まだ たたかっていない\n4にんの トレーナーを たおせるかも……"
	.byte EOS
	.if (. - BattlePyramid_Text_FourTrainersRemaining4) > 0x27
	.error "BattlePyramid_Text_FourTrainersRemaining4 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FourTrainersRemaining4) < 0x27
	.space 0x27 - (. - BattlePyramid_Text_FourTrainersRemaining4)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:455 BattlePyramid_Text_ThreeTrainersRemaining4
	.globl BattlePyramid_Text_ThreeTrainersRemaining4
BattlePyramid_Text_ThreeTrainersRemaining4: @ 0x0822E6F6
	.string "あなたなら まだ たたかっていない\n3にんの トレーナーを たおせるかも……"
	.byte EOS
	.if (. - BattlePyramid_Text_ThreeTrainersRemaining4) > 0x27
	.error "BattlePyramid_Text_ThreeTrainersRemaining4 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ThreeTrainersRemaining4) < 0x27
	.space 0x27 - (. - BattlePyramid_Text_ThreeTrainersRemaining4)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:458 BattlePyramid_Text_TwoTrainersRemaining4
	.globl BattlePyramid_Text_TwoTrainersRemaining4
BattlePyramid_Text_TwoTrainersRemaining4: @ 0x0822E71D
	.string "あなたなら まだ たたかっていない\n2にんの トレーナーを たおせるかも……"
	.byte EOS
	.if (. - BattlePyramid_Text_TwoTrainersRemaining4) > 0x27
	.error "BattlePyramid_Text_TwoTrainersRemaining4 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_TwoTrainersRemaining4) < 0x27
	.space 0x27 - (. - BattlePyramid_Text_TwoTrainersRemaining4)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:461 BattlePyramid_Text_OneTrainersRemaining4
	.globl BattlePyramid_Text_OneTrainersRemaining4
BattlePyramid_Text_OneTrainersRemaining4: @ 0x0822E744
	.string "あなたなら まだ たたかっていない\n1にんの トレーナーを たおせるかも……"
	.byte EOS
	.if (. - BattlePyramid_Text_OneTrainersRemaining4) > 0x27
	.error "BattlePyramid_Text_OneTrainersRemaining4 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_OneTrainersRemaining4) < 0x27
	.space 0x27 - (. - BattlePyramid_Text_OneTrainersRemaining4)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:464 BattlePyramid_Text_ZeroTrainersRemaining4
	.globl BattlePyramid_Text_ZeroTrainersRemaining4
BattlePyramid_Text_ZeroTrainersRemaining4: @ 0x0822E76B
	.string "あなたを たおせる トレーナーは\nもう だれも いないわ……"
	.byte EOS
	.if (. - BattlePyramid_Text_ZeroTrainersRemaining4) > 0x1f
	.error "BattlePyramid_Text_ZeroTrainersRemaining4 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ZeroTrainersRemaining4) < 0x1f
	.space 0x1f - (. - BattlePyramid_Text_ZeroTrainersRemaining4)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:467 BattlePyramid_Text_SevenTrainersRemaining5
	.globl BattlePyramid_Text_SevenTrainersRemaining5
BattlePyramid_Text_SevenTrainersRemaining5: @ 0x0822E78A
	.string "きみならば\nあと 7にん いる すごうで トレーナーを\lたおせるかも しれないな"
	.byte EOS
	.if (. - BattlePyramid_Text_SevenTrainersRemaining5) > 0x29
	.error "BattlePyramid_Text_SevenTrainersRemaining5 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SevenTrainersRemaining5) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_SevenTrainersRemaining5)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:470 BattlePyramid_Text_SixTrainersRemaining5
	.globl BattlePyramid_Text_SixTrainersRemaining5
BattlePyramid_Text_SixTrainersRemaining5: @ 0x0822E7B3
	.string "きみならば\nあと 6にん いる すごうで トレーナーを\lたおせるかも しれないな"
	.byte EOS
	.if (. - BattlePyramid_Text_SixTrainersRemaining5) > 0x29
	.error "BattlePyramid_Text_SixTrainersRemaining5 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SixTrainersRemaining5) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_SixTrainersRemaining5)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:473 BattlePyramid_Text_FiveTrainersRemaining5
	.globl BattlePyramid_Text_FiveTrainersRemaining5
BattlePyramid_Text_FiveTrainersRemaining5: @ 0x0822E7DC
	.string "きみならば\nあと 5にん いる すごうで トレーナーを\lたおせるかも しれないな"
	.byte EOS
	.if (. - BattlePyramid_Text_FiveTrainersRemaining5) > 0x29
	.error "BattlePyramid_Text_FiveTrainersRemaining5 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FiveTrainersRemaining5) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_FiveTrainersRemaining5)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:476 BattlePyramid_Text_FourTrainersRemaining5
	.globl BattlePyramid_Text_FourTrainersRemaining5
BattlePyramid_Text_FourTrainersRemaining5: @ 0x0822E805
	.string "きみならば\nあと 4にん いる すごうで トレーナーを\lたおせるかも しれないな"
	.byte EOS
	.if (. - BattlePyramid_Text_FourTrainersRemaining5) > 0x29
	.error "BattlePyramid_Text_FourTrainersRemaining5 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FourTrainersRemaining5) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_FourTrainersRemaining5)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:479 BattlePyramid_Text_ThreeTrainersRemaining5
	.globl BattlePyramid_Text_ThreeTrainersRemaining5
BattlePyramid_Text_ThreeTrainersRemaining5: @ 0x0822E82E
	.string "きみならば\nあと 3にん いる すごうで トレーナーを\lたおせるかも しれないな"
	.byte EOS
	.if (. - BattlePyramid_Text_ThreeTrainersRemaining5) > 0x29
	.error "BattlePyramid_Text_ThreeTrainersRemaining5 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ThreeTrainersRemaining5) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_ThreeTrainersRemaining5)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:482 BattlePyramid_Text_TwoTrainersRemaining5
	.globl BattlePyramid_Text_TwoTrainersRemaining5
BattlePyramid_Text_TwoTrainersRemaining5: @ 0x0822E857
	.string "きみならば\nあと 2にん いる すごうで トレーナーを\lたおせるかも しれないな"
	.byte EOS
	.if (. - BattlePyramid_Text_TwoTrainersRemaining5) > 0x29
	.error "BattlePyramid_Text_TwoTrainersRemaining5 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_TwoTrainersRemaining5) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_TwoTrainersRemaining5)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:485 BattlePyramid_Text_OneTrainersRemaining5
	.globl BattlePyramid_Text_OneTrainersRemaining5
BattlePyramid_Text_OneTrainersRemaining5: @ 0x0822E880
	.string "きみならば\nあと 1にん いる すごうで トレーナーを\lたおせるかも しれないな"
	.byte EOS
	.if (. - BattlePyramid_Text_OneTrainersRemaining5) > 0x29
	.error "BattlePyramid_Text_OneTrainersRemaining5 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_OneTrainersRemaining5) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_OneTrainersRemaining5)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:488 BattlePyramid_Text_ZeroTrainersRemaining5
	.globl BattlePyramid_Text_ZeroTrainersRemaining5
BattlePyramid_Text_ZeroTrainersRemaining5: @ 0x0822E8A9
	.string "きみは ほんとうに つよい\pもう ここには どこにも\nきみを たおせる トレーナーは おらんよ"
	.byte EOS
	.if (. - BattlePyramid_Text_ZeroTrainersRemaining5) > 0x30
	.error "BattlePyramid_Text_ZeroTrainersRemaining5 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ZeroTrainersRemaining5) < 0x30
	.space 0x30 - (. - BattlePyramid_Text_ZeroTrainersRemaining5)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:491 BattlePyramid_Text_SevenTrainersRemaining6
	.globl BattlePyramid_Text_SevenTrainersRemaining6
BattlePyramid_Text_SevenTrainersRemaining6: @ 0x0822E8D9
	.string "のこり 7にんの\nトレーナーを たおせるかい?"
	.byte EOS
	.if (. - BattlePyramid_Text_SevenTrainersRemaining6) > 0x18
	.error "BattlePyramid_Text_SevenTrainersRemaining6 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SevenTrainersRemaining6) < 0x18
	.space 0x18 - (. - BattlePyramid_Text_SevenTrainersRemaining6)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:494 BattlePyramid_Text_SixTrainersRemaining6
	.globl BattlePyramid_Text_SixTrainersRemaining6
BattlePyramid_Text_SixTrainersRemaining6: @ 0x0822E8F1
	.string "のこり 6にんの\nトレーナーを たおせるかい?"
	.byte EOS
	.if (. - BattlePyramid_Text_SixTrainersRemaining6) > 0x18
	.error "BattlePyramid_Text_SixTrainersRemaining6 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SixTrainersRemaining6) < 0x18
	.space 0x18 - (. - BattlePyramid_Text_SixTrainersRemaining6)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:497 BattlePyramid_Text_FiveTrainersRemaining6
	.globl BattlePyramid_Text_FiveTrainersRemaining6
BattlePyramid_Text_FiveTrainersRemaining6: @ 0x0822E909
	.string "のこり 5にんの\nトレーナーを たおせるかい?"
	.byte EOS
	.if (. - BattlePyramid_Text_FiveTrainersRemaining6) > 0x18
	.error "BattlePyramid_Text_FiveTrainersRemaining6 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FiveTrainersRemaining6) < 0x18
	.space 0x18 - (. - BattlePyramid_Text_FiveTrainersRemaining6)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:500 BattlePyramid_Text_FourTrainersRemaining6
	.globl BattlePyramid_Text_FourTrainersRemaining6
BattlePyramid_Text_FourTrainersRemaining6: @ 0x0822E921
	.string "のこり 4にんの\nトレーナーを たおせるかい?"
	.byte EOS
	.if (. - BattlePyramid_Text_FourTrainersRemaining6) > 0x18
	.error "BattlePyramid_Text_FourTrainersRemaining6 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FourTrainersRemaining6) < 0x18
	.space 0x18 - (. - BattlePyramid_Text_FourTrainersRemaining6)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:503 BattlePyramid_Text_ThreeTrainersRemaining6
	.globl BattlePyramid_Text_ThreeTrainersRemaining6
BattlePyramid_Text_ThreeTrainersRemaining6: @ 0x0822E939
	.string "のこり 3にんの\nトレーナーを たおせるかい?"
	.byte EOS
	.if (. - BattlePyramid_Text_ThreeTrainersRemaining6) > 0x18
	.error "BattlePyramid_Text_ThreeTrainersRemaining6 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ThreeTrainersRemaining6) < 0x18
	.space 0x18 - (. - BattlePyramid_Text_ThreeTrainersRemaining6)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:506 BattlePyramid_Text_TwoTrainersRemaining6
	.globl BattlePyramid_Text_TwoTrainersRemaining6
BattlePyramid_Text_TwoTrainersRemaining6: @ 0x0822E951
	.string "のこり 2にんの\nトレーナーを たおせるかい?"
	.byte EOS
	.if (. - BattlePyramid_Text_TwoTrainersRemaining6) > 0x18
	.error "BattlePyramid_Text_TwoTrainersRemaining6 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_TwoTrainersRemaining6) < 0x18
	.space 0x18 - (. - BattlePyramid_Text_TwoTrainersRemaining6)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:509 BattlePyramid_Text_OneTrainersRemaining6
	.globl BattlePyramid_Text_OneTrainersRemaining6
BattlePyramid_Text_OneTrainersRemaining6: @ 0x0822E969
	.string "のこり 1にんの\nトレーナーを たおせるかい?"
	.byte EOS
	.if (. - BattlePyramid_Text_OneTrainersRemaining6) > 0x18
	.error "BattlePyramid_Text_OneTrainersRemaining6 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_OneTrainersRemaining6) < 0x18
	.space 0x18 - (. - BattlePyramid_Text_OneTrainersRemaining6)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:512 BattlePyramid_Text_ZeroTrainersRemaining6
	.globl BattlePyramid_Text_ZeroTrainersRemaining6
BattlePyramid_Text_ZeroTrainersRemaining6: @ 0x0822E981
	.string "ここには あんたと たたかえる\nトレーナーは もう いないよ……"
	.byte EOS
	.if (. - BattlePyramid_Text_ZeroTrainersRemaining6) > 0x21
	.error "BattlePyramid_Text_ZeroTrainersRemaining6 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ZeroTrainersRemaining6) < 0x21
	.space 0x21 - (. - BattlePyramid_Text_ZeroTrainersRemaining6)
	.endif
	@ Embedded ROM bytes: file offset 0x22E9A2, size 0x36F
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x05, 0xF5, 0xE9, 0x22, 0x08, 0x02, 0x6F, 0xEA, 0x22, 0x08, 0x03, 0xB7, 0xE9, 0x22, 0x08, 0x04
	.byte 0xCF, 0xE9, 0x22, 0x08, 0x00, 0x16, 0x04, 0x80, 0x0D, 0x00, 0x16, 0x05, 0x80, 0xC8, 0x00, 0x16
	.byte 0x06, 0x80, 0x00, 0x00, 0x25, 0xF0, 0x00, 0x16, 0x0F, 0x40, 0x01, 0x00, 0x02, 0x01, 0x40, 0x00
	.byte 0x00, 0xD9, 0xE9, 0x22, 0x08, 0x00, 0x00, 0x16, 0x01, 0x40, 0x01, 0x00, 0x5B, 0xFF, 0x00, 0x02
	.byte 0x21, 0x0C, 0x40, 0x00, 0x00, 0x06, 0x05, 0xF4, 0xE9, 0x22, 0x08, 0x63, 0x02, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x02, 0x16, 0x04, 0x80, 0x09, 0x00, 0x25, 0xE7, 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00
	.byte 0x06, 0x01, 0x0D, 0xEA, 0x22, 0x08, 0x04, 0x64, 0x22, 0x22, 0x08, 0x19, 0x0C, 0x40, 0x0D, 0x80
	.byte 0x16, 0x04, 0x80, 0x00, 0x00, 0x25, 0xE7, 0x00, 0x19, 0x00, 0x80, 0x00, 0x40, 0x21, 0x00, 0x80
	.byte 0x00, 0x00, 0x06, 0x01, 0x94, 0xEA, 0x22, 0x08, 0x21, 0x00, 0x80, 0x01, 0x00, 0x06, 0x01, 0x2F
	.byte 0xD6, 0x22, 0x08, 0x21, 0x00, 0x80, 0x02, 0x00, 0x06, 0x01, 0x94, 0xEA, 0x22, 0x08, 0x16, 0x04
	.byte 0x80, 0x01, 0x00, 0x16, 0x05, 0x80, 0x05, 0x00, 0x25, 0xE7, 0x00, 0x21, 0x0D, 0x80, 0x02, 0x00
	.byte 0x06, 0x01, 0x0B, 0xD6, 0x22, 0x08, 0x21, 0x0D, 0x80, 0x03, 0x00, 0x06, 0x01, 0x0B, 0xD6, 0x22
	.byte 0x08, 0x21, 0x0D, 0x80, 0x09, 0x00, 0x06, 0x01, 0x0B, 0xD6, 0x22, 0x08, 0x02, 0x0E, 0x40, 0x00
	.byte 0x00, 0x81, 0xEA, 0x22, 0x08, 0x0F, 0x40, 0x01, 0x00, 0x8B, 0xEA, 0x22, 0x08, 0x00, 0x00, 0x33
	.byte 0xCE, 0x01, 0x00, 0x16, 0x0E, 0x40, 0x01, 0x00, 0x02, 0x25, 0x97, 0x01, 0x16, 0x0F, 0x40, 0x00
	.byte 0x00, 0x02, 0x16, 0x04, 0x80, 0x03, 0x00, 0x16, 0x05, 0x80, 0x01, 0x00, 0x25, 0xF0, 0x00, 0x25
	.byte 0x27, 0x00, 0x16, 0x04, 0x80, 0x02, 0x00, 0x16, 0x05, 0x80, 0x00, 0x00, 0x16, 0x06, 0x80, 0x00
	.byte 0x00, 0x25, 0xE7, 0x00, 0x16, 0x04, 0x80, 0x09, 0x00, 0x25, 0xF0, 0x00, 0x16, 0x04, 0x80, 0x03
	.byte 0x00, 0x16, 0x05, 0x80, 0x03, 0x00, 0x25, 0xE7, 0x00, 0x16, 0x0F, 0x40, 0x01, 0x00, 0x02, 0x6A
	.byte 0x5A, 0x21, 0x0D, 0x40, 0x00, 0x00, 0x06, 0x05, 0x37, 0xEB, 0x22, 0x08, 0x21, 0x0C, 0x40, 0x00
	.byte 0x00, 0x06, 0x05, 0x41, 0xEB, 0x22, 0x08, 0x0F, 0x00
	.4byte BattleFrontier_BattlePyramidTop_Text_ReachedSummitUpYouGo
	.byte 0x09, 0x04, 0x68
	.byte 0x4F, 0x01, 0x00, 0xFE, 0xEC, 0x22, 0x08, 0x51, 0x00, 0x00, 0x4F, 0xFF, 0x00, 0x04, 0xED, 0x22
	.byte 0x08, 0x51, 0x00, 0x00, 0x4F, 0x01, 0x00, 0x01, 0xED, 0x22, 0x08, 0x51, 0x00, 0x00, 0x67
	.4byte BattleFrontier_BattlePyramidTop_Text_PlayerConqueredPyramid @ ROM pointer 0x0822ED8A
	.byte 0x66, 0x31, 0xCB, 0x01, 0x32, 0x68, 0x16, 0x04, 0x80, 0x02, 0x00, 0x16, 0x05, 0x80, 0x00, 0x00
	.byte 0x16, 0x06, 0x80, 0x03, 0x00, 0x25, 0xE7, 0x00, 0x39, 0x1A, 0x19, 0xFF, 0x07, 0x00, 0x0D, 0x00
	.byte 0x27, 0x02, 0x0F, 0x00
	.4byte BattleFrontier_BattlePyramidTop_Text_StepForwardWhenReady @ ROM pointer 0x0822F1A5
	.byte 0x09, 0x04, 0x68, 0x02, 0x0F, 0x00, 0xA6, 0xED, 0x22, 0x08, 0x09, 0x04, 0x4F, 0x01, 0x00, 0xFE
	.byte 0xEC, 0x22, 0x08, 0x16, 0x0D, 0x40, 0x01, 0x00, 0x68, 0x02, 0x69, 0x19, 0x00, 0x80, 0x0C, 0x40
	.byte 0x21, 0x00, 0x80, 0x02, 0x00, 0x06, 0x01, 0x36, 0xEC, 0x22, 0x08, 0x21, 0x00, 0x80, 0x03, 0x00
	.byte 0x06, 0x01, 0xD1, 0xEB, 0x22, 0x08, 0x21, 0x00, 0x80, 0x04, 0x00, 0x06, 0x01, 0x89, 0xEC, 0x22
	.byte 0x08, 0x16, 0x04, 0x80, 0x01, 0x00, 0x16, 0x05, 0x80, 0x07, 0x00, 0x25, 0xE7, 0x00, 0x21, 0x0D
	.byte 0x80, 0x00, 0x00, 0x06, 0x05, 0xD1, 0xEB, 0x22, 0x08, 0x25, 0x13, 0x01, 0x4F, 0x7F, 0x00, 0x0D
	.byte 0xED, 0x22, 0x08, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte BattleFrontier_BattlePyramidTop_Text_ExplorationsAreGrandestAdventure @ ROM pointer 0x0822EE63
	.byte 0x09, 0x04, 0x68, 0x16, 0x04, 0x80, 0x02, 0x00, 0x16, 0x05, 0x80, 0x07, 0x00, 0x25, 0xE7, 0x00
	.byte 0x4F, 0x02, 0x00, 0x0B, 0xED, 0x22, 0x08, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte BattleFrontier_BattlePyramidTop_Text_ImPyramidKingBrandon @ ROM pointer 0x0822EECD
	.byte 0x09, 0x04, 0x05, 0xDB, 0xEB, 0x22, 0x08, 0x02, 0x4F, 0x02, 0x00, 0x0B, 0xED, 0x22, 0x08, 0x51
	.byte 0x00, 0x00, 0x0F, 0x00
	.4byte BattleFrontier_BattlePyramidTop_Text_BringCourageToOurBattle @ ROM pointer 0x0822EF6A
	.byte 0x09, 0x04, 0x04, 0xEE, 0xEC, 0x22, 0x08, 0x33, 0xCE, 0x01, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00
	.byte 0x06, 0x01, 0xFC, 0xEB, 0x22, 0x08, 0x05, 0x0B, 0xD6, 0x22, 0x08, 0x16, 0x04, 0x80, 0x0C, 0x00
	.byte 0x25, 0xE7, 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x05, 0x1B, 0xEB, 0x22, 0x08, 0x0F, 0x00
	.4byte BattleFrontier_BattlePyramidTop_Text_BrandonFrontierPassPlease @ ROM pointer 0x0822EF86
	.byte 0x09, 0x04, 0x31, 0xD2, 0x01, 0x67
	.4byte BattleFrontier_BattlePyramidTop_Text_ReceivedBraveSymbol
	.byte 0x66, 0x32, 0x16, 0x04, 0x80, 0x0D
	.byte 0x00, 0x25, 0xE7, 0x00, 0x0F, 0x00
	.4byte BattleFrontier_BattlePyramidTop_Text_LookForwardToNextMeeting
	.byte 0x09, 0x04, 0x05, 0x1B, 0xEB, 0x22
	.byte 0x08, 0x16, 0x04, 0x80, 0x01, 0x00, 0x16, 0x05, 0x80, 0x07, 0x00, 0x25, 0xE7, 0x00, 0x21, 0x0D
	.byte 0x80, 0x00, 0x00, 0x06, 0x05, 0x89, 0xEC, 0x22, 0x08, 0x25, 0x13, 0x01, 0x4F, 0x7F, 0x00, 0x0D
	.byte 0xED, 0x22, 0x08, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte BattleFrontier_BattlePyramidTop_Text_BrandonYouveReturned @ ROM pointer 0x0822F005
	.byte 0x09, 0x04, 0x68, 0x16, 0x04, 0x80, 0x02, 0x00, 0x16, 0x05, 0x80, 0x07, 0x00, 0x25, 0xE7, 0x00
	.byte 0x4F, 0x02, 0x00, 0x0B, 0xED, 0x22, 0x08, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte BattleFrontier_BattlePyramidTop_Text_MyCourageIsOffMeter @ ROM pointer 0x0822F0B0
	.byte 0x09, 0x04, 0x05, 0x93, 0xEC, 0x22, 0x08, 0x02, 0x4F, 0x02, 0x00, 0x0B, 0xED, 0x22, 0x08, 0x51
	.byte 0x00, 0x00, 0x0F, 0x00
	.4byte BattleFrontier_BattlePyramidTop_Text_EverythingYouHave @ ROM pointer 0x0822F0D1
	.byte 0x09, 0x04, 0x04, 0xEE, 0xEC, 0x22, 0x08, 0x33, 0xCE, 0x01, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00
	.byte 0x06, 0x01, 0xB4, 0xEC, 0x22, 0x08, 0x05, 0x0B, 0xD6, 0x22, 0x08, 0x16, 0x04, 0x80, 0x0C, 0x00
	.byte 0x25, 0xE7, 0x00, 0x21, 0x0D, 0x80, 0x02, 0x00, 0x06, 0x01, 0x1B, 0xEB, 0x22, 0x08, 0x0F, 0x00
	.4byte BattleFrontier_BattlePyramidTop_Text_BrandonRemarkableHaveThis @ ROM pointer 0x0822F0EE
	.byte 0x09, 0x04, 0x31, 0xD2, 0x01, 0x67
	.4byte BattleFrontier_BattlePyramidTop_Text_BraveSymbolTookGoldenShine
	.byte 0x66, 0x32, 0x16, 0x04, 0x80, 0x0D
	.byte 0x00, 0x25, 0xE7, 0x00, 0x0F, 0x00
	.4byte BattleFrontier_BattlePyramidTop_Text_FarewellForNow
	.byte 0x09, 0x04, 0x05, 0x1B, 0xEB, 0x22
	.byte 0x08, 0x68, 0x16, 0x04, 0x80, 0x0A, 0x00, 0x16, 0x05, 0x80, 0x00, 0x00, 0x25, 0xEC, 0x00, 0x27
	.byte 0x03, 0x0B, 0x27, 0xFE, 0x0A, 0x26, 0xFE, 0x09, 0x09, 0x09, 0x09, 0x09, 0x25, 0xFE, 0x15, 0xFE
	.byte 0x05, 0x05, 0x14, 0xFE
