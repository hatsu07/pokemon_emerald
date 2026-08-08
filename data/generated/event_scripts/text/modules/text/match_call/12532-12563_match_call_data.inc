	@ data/text/match_call.inc:673 MatchCall_Text_Winona_Preparing
	.globl gText_Rom_26A46B
gText_Rom_26A46B: @ 0x0826A46B
	.string "ナギ『こんにちは {PLAYER}さん!\pあなたと しょうぶを したおかげで\nじぶんの じゃくてんが よくわかったわ!\pいつか また ジムを さいかい できたら\nそのときは もう まけませんよ!"
	.byte EOS
	.if (. - gText_Rom_26A46B) > 0x5c
	.error "gText_Rom_26A46B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A46B) < 0x5c
	.space 0x5c - (. - gText_Rom_26A46B)
	.endif

	@ data/text/match_call.inc:676 MatchCall_Text_Winona_PreparingPostGame
	.globl gText_Rom_26A4C7
gText_Rom_26A4C7: @ 0x0826A4C7
	.string "ナギ『やりましたね {PLAYER}さん!\pしんチャンピオン たんじょうの うわさは\nヒワマキにも とどいて いますよ!\pでも…… つぎに しょうぶ するときは\nこのまえの ようには いきませんからね!"
	.byte EOS
	.if (. - gText_Rom_26A4C7) > 0x60
	.error "gText_Rom_26A4C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A4C7) < 0x60
	.space 0x60 - (. - gText_Rom_26A4C7)
	.endif
	@ Embedded ROM bytes: file offset 0x26A527, size 0x30
	.byte 0x65, 0x88, 0xB1, 0x04, 0x04, 0x14, 0x00, 0xFD, 0x01, 0x0B, 0x2E, 0xAC, 0xFE, 0x8D, 0x71, 0x19
	.byte 0x00, 0x3D, 0x35, 0x2E, 0x47, 0x37, 0x00, 0x44, 0x07, 0x1F, 0x0C, 0x10, 0x26, 0xAB, 0xFB, 0x6B
	.byte 0x7C, 0x6F, 0x57, 0x00, 0x60, 0x53, 0x7E, 0x44, 0x00, 0x1F, 0x50, 0x13, 0x1F, 0x0D, 0xAB, 0xFF

	@ data/text/match_call.inc:682 MatchCall_Text_Winona_PostRematch
	.globl gText_Rom_26A557
gText_Rom_26A557: @ 0x0826A557
	.string "ナギ『{PLAYER}さん……\nしょうぶに まけても わたしの つばさは\lけっして おれることは ないのです!\pそう {PLAYER}さんが\nゆめを あきらめなかった ように!"
	.byte EOS
	.if (. - gText_Rom_26A557) > 0x4d
	.error "gText_Rom_26A557 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A557) < 0x4d
	.space 0x4d - (. - gText_Rom_26A557)
	.endif

	@ data/text/match_call.inc:685 MatchCall_Text_TateLiza_Preparing
	.globl gText_Rom_26A5A4
gText_Rom_26A5A4: @ 0x0826A5A4
	.string "フウ『あっ あなたは\nラン『{PLAYER}さん ですね!\pフウ『ぼくたち ジムを さいかい するため\nラン『しゅぎょう しなおして いるんです!\pフウ『ジムの じゅんびが できたら\nラン『ジムの じゅんびが できたら\pフウ『エントリーコールの なまえに\nラン『しるしが つくので わかるんです!"
	.byte EOS
	.if (. - gText_Rom_26A5A4) > 0x8f
	.error "gText_Rom_26A5A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A5A4) < 0x8f
	.space 0x8f - (. - gText_Rom_26A5A4)
	.endif

	@ data/text/match_call.inc:688 MatchCall_Text_TateLiza_PreparingPostGame
	.globl gText_Rom_26A633
gText_Rom_26A633: @ 0x0826A633
	.string "フウ『{PLAYER}さん おめでとう!\nラン『{PLAYER}さん おめでとう!\pフウ『ぼくたち ふたりは\nラン『まだ しゅぎょうちゅう!\pフウ『もうすこし じかんが かかるけど\nラン『もし ジムを さいかい できたら\pフウ『エントリーコールの なまえに\nラン『しるしが つくから わかりますよ!"
	.byte EOS
	.if (. - gText_Rom_26A633) > 0x8a
	.error "gText_Rom_26A633 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A633) < 0x8a
	.space 0x8a - (. - gText_Rom_26A633)
	.endif

	@ data/text/match_call.inc:691 MatchCall_Text_TateLiza_RematchReady
	.globl gText_Rom_26A6BD
gText_Rom_26A6BD: @ 0x0826A6BD
	.string "フウ『{PLAYER}さん!\nラン『{PLAYER}さん!\pフウ『ジムの じゅんびが できました!\nラン『ジムの じゅんびが できました!\pフウ『いつでも トクサネ シティまで\nラン『きてくださいね!"
	.byte EOS
	.if (. - gText_Rom_26A6BD) > 0x59
	.error "gText_Rom_26A6BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A6BD) < 0x59
	.space 0x59 - (. - gText_Rom_26A6BD)
	.endif

	@ data/text/match_call.inc:694 MatchCall_Text_TateLiza_PostRematch
	.globl gText_Rom_26A716
gText_Rom_26A716: @ 0x0826A716
	.string "フウ『{PLAYER}さんとの しょうぶは\nラン『わたしたちの だいじな けいけん\pフウ『いつか また 3にんで\nラン『しょうぶが できると いいですね"
	.byte EOS
	.if (. - gText_Rom_26A716) > 0x47
	.error "gText_Rom_26A716 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A716) < 0x47
	.space 0x47 - (. - gText_Rom_26A716)
	.endif

	@ data/text/match_call.inc:697 MatchCall_Text_Juan_Preparing
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26A75D
gText_Rom_26A75D: @ 0x0826A75D
	.string "アダン『ほ……\n{PLAYER}{KUN}…… でしたね\pユーとの たたかいは\nはじめて ミクリと であったときを\lおもいださせて くれましたよ\pもしかすると ユーは\nミクリを こえるほどの ジーニアス!\lすなわち てんさい かもしれません"
	.byte EOS
	.if (. - gText_Rom_26A75D) != 0x70
	.error "gText_Rom_26A75D must retain its original byte length"
	.endif
	.globl gText_Rom_26A7C9
	.set gText_Rom_26A7C9, gText_Rom_26A75D + 0x6c

	@ data/text/match_call.inc:700 MatchCall_Text_Juan_PreparingPostGame
	.globl gText_Rom_26A7CD
gText_Rom_26A7CD: @ 0x0826A7CD
	.string "アダン『ふ…… {PLAYER}{KUN}\nついに やりとげた ようですね\pやはり わたくしの ひとを みるめは\nまちがって いなかった……\pつよさを きわめた ユーとは\nぜひ また しょうぶ したい ものです"
	.byte EOS
	.if (. - gText_Rom_26A7CD) > 0x61
	.error "gText_Rom_26A7CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A7CD) < 0x61
	.space 0x61 - (. - gText_Rom_26A7CD)
	.endif

	@ data/text/match_call.inc:703 MatchCall_Text_Juan_RematchReady
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26A82E
gText_Rom_26A82E: @ 0x0826A82E
	.string "アダン『ほっほ…… {PLAYER}{KUN}\pわが ルネシティ ジムが\nふたたび オープン したのですよ\pわたくしの すがたを みたくなったら\nまあ いつでも おいでなさい"
	.byte EOS
	.if (. - gText_Rom_26A82E) != 0x4f
	.error "gText_Rom_26A82E must retain its original byte length"
	.endif
	.globl gText_Rom_26A879
	.set gText_Rom_26A879, gText_Rom_26A82E + 0x4b

	@ data/text/match_call.inc:706 MatchCall_Text_Juan_PostRematch
	.globl gText_Rom_26A87D
gText_Rom_26A87D: @ 0x0826A87D
	.string "アダン『{PLAYER}{KUN}……\pユーと かなでる ポケモン しょうぶは\nせんれんされた おんがくにも にて\lハートに ふかく ひびいて きます……\pめを とじれば メロディーに あわせて\nゆうがに まう ユーの すがたが……"
	.byte EOS
	.if (. - gText_Rom_26A87D) > 0x6c
	.error "gText_Rom_26A87D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A87D) < 0x6c
	.space 0x6c - (. - gText_Rom_26A87D)
	.endif

	@ data/text/match_call.inc:709 MatchCall_Text_Sidney
	.globl gText_Rom_26A8E9
gText_Rom_26A8E9: @ 0x0826A8E9
	.string "カゲツ『よお {PLAYER}!\pおれと ポケモン しょうぶ したけりゃ\nいつでも ポケモン リーグに おいで!\pおれは いつでも ここに いるからな\nじゃあ まってるぜ!"
	.byte EOS
	.if (. - gText_Rom_26A8E9) > 0x51
	.error "gText_Rom_26A8E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A8E9) < 0x51
	.space 0x51 - (. - gText_Rom_26A8E9)
	.endif

	@ data/text/match_call.inc:712 MatchCall_Text_Phoebe
	.globl gText_Rom_26A93A
gText_Rom_26A93A: @ 0x0826A93A
	.string "フヨウ『ハーイ {PLAYER}!\pあなたと ポケモンの きずなが\nどれぐらい ふかく なったか\lたまには ここまで みせに きてよね!"
	.byte EOS
	.if (. - gText_Rom_26A93A) > 0x3f
	.error "gText_Rom_26A93A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A93A) < 0x3f
	.space 0x3f - (. - gText_Rom_26A93A)
	.endif

	@ data/text/match_call.inc:715 MatchCall_Text_Glacia
	.globl gText_Rom_26A979
gText_Rom_26A979: @ 0x0826A979
	.string "プリム『こんにちは {PLAYER}\pあなたは その つよさに\nおぼれたり していない でしょうね\pあつい きもちを すこしだけ\nひやしたいと おもったら\lポケモン リーグに いらっしゃい……"
	.byte EOS
	.if (. - gText_Rom_26A979) > 0x5b
	.error "gText_Rom_26A979 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A979) < 0x5b
	.space 0x5b - (. - gText_Rom_26A979)
	.endif

	@ data/text/match_call.inc:718 MatchCall_Text_Drake
	.globl gText_Rom_26A9D4
gText_Rom_26A9D4: @ 0x0826A9D4
	.string "ゲンジ『そのこえは {PLAYER}か\nげんきそう だな……\pさいきん ポケモン リーグとは べつに\nトレーナーの うでを きそわせる\lバトル フロンティア とかいう しせつが\lあるらしいが……\pほんとうの しょうぶを したいのなら\nやはり ポケモン リーグだ!\pなあ {PLAYER}も そうおもう だろう?"
	.byte EOS
	.if (. - gText_Rom_26A9D4) > 0x90
	.error "gText_Rom_26A9D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A9D4) < 0x90
	.space 0x90 - (. - gText_Rom_26A9D4)
	.endif

