	@ data/text/match_call.inc:673 MatchCall_Text_Winona_Preparing
	.globl MatchCall_Text_Winona_Preparing
MatchCall_Text_Winona_Preparing: @ 0x0826A46B
	.string "ナギ『こんにちは {PLAYER}さん!\pあなたと しょうぶを したおかげで\nじぶんの じゃくてんが よくわかったわ!\pいつか また ジムを さいかい できたら\nそのときは もう まけませんよ!"
	.byte EOS
	.if (. - MatchCall_Text_Winona_Preparing) > 0x5c
	.error "MatchCall_Text_Winona_Preparing may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Winona_Preparing) < 0x5c
	.space 0x5c - (. - MatchCall_Text_Winona_Preparing)
	.endif

	@ data/text/match_call.inc:676 MatchCall_Text_Winona_PreparingPostGame
	.globl MatchCall_Text_Winona_PreparingPostGame
MatchCall_Text_Winona_PreparingPostGame: @ 0x0826A4C7
	.string "ナギ『やりましたね {PLAYER}さん!\pしんチャンピオン たんじょうの うわさは\nヒワマキにも とどいて いますよ!\pでも…… つぎに しょうぶ するときは\nこのまえの ようには いきませんからね!"
	.byte EOS
	.if (. - MatchCall_Text_Winona_PreparingPostGame) > 0x60
	.error "MatchCall_Text_Winona_PreparingPostGame may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Winona_PreparingPostGame) < 0x60
	.space 0x60 - (. - MatchCall_Text_Winona_PreparingPostGame)
	.endif
	@ Embedded ROM bytes: file offset 0x26A527, size 0x30
	.byte 0x65, 0x88, 0xB1, 0x04, 0x04, 0x14, 0x00, 0xFD, 0x01, 0x0B, 0x2E, 0xAC, 0xFE, 0x8D, 0x71, 0x19
	.byte 0x00, 0x3D, 0x35, 0x2E, 0x47, 0x37, 0x00, 0x44, 0x07, 0x1F, 0x0C, 0x10, 0x26, 0xAB, 0xFB, 0x6B
	.byte 0x7C, 0x6F, 0x57, 0x00, 0x60, 0x53, 0x7E, 0x44, 0x00, 0x1F, 0x50, 0x13, 0x1F, 0x0D, 0xAB, 0xFF

	@ data/text/match_call.inc:682 MatchCall_Text_Winona_PostRematch
	.globl MatchCall_Text_Winona_PostRematch
MatchCall_Text_Winona_PostRematch: @ 0x0826A557
	.string "ナギ『{PLAYER}さん……\nしょうぶに まけても わたしの つばさは\lけっして おれることは ないのです!\pそう {PLAYER}さんが\nゆめを あきらめなかった ように!"
	.byte EOS
	.if (. - MatchCall_Text_Winona_PostRematch) > 0x4d
	.error "MatchCall_Text_Winona_PostRematch may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Winona_PostRematch) < 0x4d
	.space 0x4d - (. - MatchCall_Text_Winona_PostRematch)
	.endif

	@ data/text/match_call.inc:685 MatchCall_Text_TateLiza_Preparing
	.globl MatchCall_Text_TateLiza_Preparing
MatchCall_Text_TateLiza_Preparing: @ 0x0826A5A4
	.string "フウ『あっ あなたは\nラン『{PLAYER}さん ですね!\pフウ『ぼくたち ジムを さいかい するため\nラン『しゅぎょう しなおして いるんです!\pフウ『ジムの じゅんびが できたら\nラン『ジムの じゅんびが できたら\pフウ『エントリーコールの なまえに\nラン『しるしが つくので わかるんです!"
	.byte EOS
	.if (. - MatchCall_Text_TateLiza_Preparing) > 0x8f
	.error "MatchCall_Text_TateLiza_Preparing may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_TateLiza_Preparing) < 0x8f
	.space 0x8f - (. - MatchCall_Text_TateLiza_Preparing)
	.endif

	@ data/text/match_call.inc:688 MatchCall_Text_TateLiza_PreparingPostGame
	.globl MatchCall_Text_TateLiza_PreparingPostGame
MatchCall_Text_TateLiza_PreparingPostGame: @ 0x0826A633
	.string "フウ『{PLAYER}さん おめでとう!\nラン『{PLAYER}さん おめでとう!\pフウ『ぼくたち ふたりは\nラン『まだ しゅぎょうちゅう!\pフウ『もうすこし じかんが かかるけど\nラン『もし ジムを さいかい できたら\pフウ『エントリーコールの なまえに\nラン『しるしが つくから わかりますよ!"
	.byte EOS
	.if (. - MatchCall_Text_TateLiza_PreparingPostGame) > 0x8a
	.error "MatchCall_Text_TateLiza_PreparingPostGame may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_TateLiza_PreparingPostGame) < 0x8a
	.space 0x8a - (. - MatchCall_Text_TateLiza_PreparingPostGame)
	.endif

	@ data/text/match_call.inc:691 MatchCall_Text_TateLiza_RematchReady
	.globl MatchCall_Text_TateLiza_RematchReady
MatchCall_Text_TateLiza_RematchReady: @ 0x0826A6BD
	.string "フウ『{PLAYER}さん!\nラン『{PLAYER}さん!\pフウ『ジムの じゅんびが できました!\nラン『ジムの じゅんびが できました!\pフウ『いつでも トクサネ シティまで\nラン『きてくださいね!"
	.byte EOS
	.if (. - MatchCall_Text_TateLiza_RematchReady) > 0x59
	.error "MatchCall_Text_TateLiza_RematchReady may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_TateLiza_RematchReady) < 0x59
	.space 0x59 - (. - MatchCall_Text_TateLiza_RematchReady)
	.endif

	@ data/text/match_call.inc:694 MatchCall_Text_TateLiza_PostRematch
	.globl MatchCall_Text_TateLiza_PostRematch
MatchCall_Text_TateLiza_PostRematch: @ 0x0826A716
	.string "フウ『{PLAYER}さんとの しょうぶは\nラン『わたしたちの だいじな けいけん\pフウ『いつか また 3にんで\nラン『しょうぶが できると いいですね"
	.byte EOS
	.if (. - MatchCall_Text_TateLiza_PostRematch) > 0x47
	.error "MatchCall_Text_TateLiza_PostRematch may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_TateLiza_PostRematch) < 0x47
	.space 0x47 - (. - MatchCall_Text_TateLiza_PostRematch)
	.endif

	@ data/text/match_call.inc:697 MatchCall_Text_Juan_Preparing
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_Text_Juan_Preparing
MatchCall_Text_Juan_Preparing: @ 0x0826A75D
	.string "アダン『ほ……\n{PLAYER}{KUN}…… でしたね\pユーとの たたかいは\nはじめて ミクリと であったときを\lおもいださせて くれましたよ\pもしかすると ユーは\nミクリを こえるほどの ジーニアス!\lすなわち てんさい かもしれません"
	.byte EOS
	.if (. - MatchCall_Text_Juan_Preparing) != 0x70
	.error "MatchCall_Text_Juan_Preparing must retain its original byte length"
	.endif

	@ data/text/match_call.inc:700 MatchCall_Text_Juan_PreparingPostGame
	.globl MatchCall_Text_Juan_PreparingPostGame
MatchCall_Text_Juan_PreparingPostGame: @ 0x0826A7CD
	.string "アダン『ふ…… {PLAYER}{KUN}\nついに やりとげた ようですね\pやはり わたくしの ひとを みるめは\nまちがって いなかった……\pつよさを きわめた ユーとは\nぜひ また しょうぶ したい ものです"
	.byte EOS
	.if (. - MatchCall_Text_Juan_PreparingPostGame) > 0x61
	.error "MatchCall_Text_Juan_PreparingPostGame may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Juan_PreparingPostGame) < 0x61
	.space 0x61 - (. - MatchCall_Text_Juan_PreparingPostGame)
	.endif

	@ data/text/match_call.inc:703 MatchCall_Text_Juan_RematchReady
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_Text_Juan_RematchReady
MatchCall_Text_Juan_RematchReady: @ 0x0826A82E
	.string "アダン『ほっほ…… {PLAYER}{KUN}\pわが ルネシティ ジムが\nふたたび オープン したのですよ\pわたくしの すがたを みたくなったら\nまあ いつでも おいでなさい"
	.byte EOS
	.if (. - MatchCall_Text_Juan_RematchReady) != 0x4f
	.error "MatchCall_Text_Juan_RematchReady must retain its original byte length"
	.endif

	@ data/text/match_call.inc:706 MatchCall_Text_Juan_PostRematch
	.globl MatchCall_Text_Juan_PostRematch
MatchCall_Text_Juan_PostRematch: @ 0x0826A87D
	.string "アダン『{PLAYER}{KUN}……\pユーと かなでる ポケモン しょうぶは\nせんれんされた おんがくにも にて\lハートに ふかく ひびいて きます……\pめを とじれば メロディーに あわせて\nゆうがに まう ユーの すがたが……"
	.byte EOS
	.if (. - MatchCall_Text_Juan_PostRematch) > 0x6c
	.error "MatchCall_Text_Juan_PostRematch may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Juan_PostRematch) < 0x6c
	.space 0x6c - (. - MatchCall_Text_Juan_PostRematch)
	.endif

	@ data/text/match_call.inc:709 MatchCall_Text_Sidney
	.globl MatchCall_Text_Sidney
MatchCall_Text_Sidney: @ 0x0826A8E9
	.string "カゲツ『よお {PLAYER}!\pおれと ポケモン しょうぶ したけりゃ\nいつでも ポケモン リーグに おいで!\pおれは いつでも ここに いるからな\nじゃあ まってるぜ!"
	.byte EOS
	.if (. - MatchCall_Text_Sidney) > 0x51
	.error "MatchCall_Text_Sidney may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Sidney) < 0x51
	.space 0x51 - (. - MatchCall_Text_Sidney)
	.endif

	@ data/text/match_call.inc:712 MatchCall_Text_Phoebe
	.globl MatchCall_Text_Phoebe
MatchCall_Text_Phoebe: @ 0x0826A93A
	.string "フヨウ『ハーイ {PLAYER}!\pあなたと ポケモンの きずなが\nどれぐらい ふかく なったか\lたまには ここまで みせに きてよね!"
	.byte EOS
	.if (. - MatchCall_Text_Phoebe) > 0x3f
	.error "MatchCall_Text_Phoebe may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Phoebe) < 0x3f
	.space 0x3f - (. - MatchCall_Text_Phoebe)
	.endif

	@ data/text/match_call.inc:715 MatchCall_Text_Glacia
	.globl MatchCall_Text_Glacia
MatchCall_Text_Glacia: @ 0x0826A979
	.string "プリム『こんにちは {PLAYER}\pあなたは その つよさに\nおぼれたり していない でしょうね\pあつい きもちを すこしだけ\nひやしたいと おもったら\lポケモン リーグに いらっしゃい……"
	.byte EOS
	.if (. - MatchCall_Text_Glacia) > 0x5b
	.error "MatchCall_Text_Glacia may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Glacia) < 0x5b
	.space 0x5b - (. - MatchCall_Text_Glacia)
	.endif

	@ data/text/match_call.inc:718 MatchCall_Text_Drake
	.globl MatchCall_Text_Drake
MatchCall_Text_Drake: @ 0x0826A9D4
	.string "ゲンジ『そのこえは {PLAYER}か\nげんきそう だな……\pさいきん ポケモン リーグとは べつに\nトレーナーの うでを きそわせる\lバトル フロンティア とかいう しせつが\lあるらしいが……\pほんとうの しょうぶを したいのなら\nやはり ポケモン リーグだ!\pなあ {PLAYER}も そうおもう だろう?"
	.byte EOS
	.if (. - MatchCall_Text_Drake) > 0x90
	.error "MatchCall_Text_Drake may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Drake) < 0x90
	.space 0x90 - (. - MatchCall_Text_Drake)
	.endif

