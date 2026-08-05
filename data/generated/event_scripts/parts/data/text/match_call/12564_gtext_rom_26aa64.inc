	@ data/text/match_call.inc:721 MatchCall_Text_Wallace
	.globl gText_Rom_26AA64
gText_Rom_26AA64: @ 0x0826AA64
	.string "ミクリ『やあ {PLAYER}{KUN}\nきみは ダイゴには あったかな?\pかれって……\nほんとうは ものすごく つよいのに\pあまり ポケモン しょうぶを しないで\nめずらしい いしを さがして ばかりいる\lかわりもの なんだよ\pどこかの どうくつか いわやまに\nもぐってるんじゃ ないかな\pめずらしい いし なんて\nわたしには いんせき ぐらいしか\lおもい うかばないんだけど……"
	.byte EOS
	.if (. - gText_Rom_26AA64) > 0xb7
	.error "gText_Rom_26AA64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26AA64) < 0xb7
	.space 0xb7 - (. - gText_Rom_26AA64)
	.endif
