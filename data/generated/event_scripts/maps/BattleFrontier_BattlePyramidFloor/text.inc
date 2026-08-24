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
