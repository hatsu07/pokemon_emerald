	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+32 aliases)
	.globl gText_Rom_2536D3
gText_Rom_2536D3: @ 0x082536D3
	.string "{0xFD}{0x01}さん　あいての　こうどうを\nよむのが　とても　うまいです！\pどうぐを　つかう　タイミング　なんか\nなかなかの　ものでしたよ！"
	.byte EOS
	.if (. - gText_Rom_2536D3) > 0x41
	.error "gText_Rom_2536D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2536D3) < 0x41
	.space 0x41 - (. - gText_Rom_2536D3)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+32 aliases)
	.globl gText_Rom_253714
gText_Rom_253714: @ 0x08253714
	.string "しょうじき　わたしも　なかなか\nつよいかも　と　おもっちゃい　ましたー！\pさいごは　けっきょく　まけちゃった　けど\nいい　しあい　だったなー\pでも　わたしに　くせん　してるようじゃ\nまだまだ　ですよ　{0xFD}{0x01}さん！"
	.byte EOS
	.if (. - gText_Rom_253714) > 0x6a
	.error "gText_Rom_253714 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_253714) < 0x6a
	.space 0x6a - (. - gText_Rom_253714)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+32 aliases)
	.globl gText_Rom_25377E
gText_Rom_25377E: @ 0x0825377E
	.string "たいせんの　あと　{0xFD}{0x01}さんに\nいまの　たいせんの　かんそうを　きくと\p「{0xFD}{0x02}」って\nこたえて　くれました\p{0xFD}{0x01}さんの　ポケモンの\n{0xFD}{0x03}と　{0xFD}{0x04}\lそして　「{0xFD}{0x02}」……\pんー！！\nなんか　いみのふかい　ことば　よね！\pやはり　いい　トレーナーは\nいいことを　いって　くれますね\pさて　それじゃあ　また\nじかいの　ほうそうで　おあい　しましょう！"
	.byte EOS
	.if (. - gText_Rom_25377E) > 0xab
	.error "gText_Rom_25377E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25377E) < 0xab
	.space 0xab - (. - gText_Rom_25377E)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+14 aliases)
	.globl gText_Rom_253829
gText_Rom_253829: @ 0x08253829
	.string "『ポケモン　コンテスト　けっか　そくほう』\pしかい『みなさん　きょうしゅく　です！\pほんじつは　{0xFD}{0x02}さ　コンテストが\nしゅうりょうした　ばかりの　こちらの\lかいじょう　から　おおくり　します！\pかんきゃく『？ーーー！！\pしかい『おおっと　どうやら\nコンテスト　さんかしゃ　たちが\lこちらに　むかって　くるようですっ！\pわたくし　さっそく　とつげき　しゅざいを\nおこないたいと　おもいます！\pかんきゃく『？ーーー！！　？ーーー！！"
	.byte EOS
	.if (. - gText_Rom_253829) > 0xd7
	.error "gText_Rom_253829 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_253829) < 0xd7
	.space 0xd7 - (. - gText_Rom_253829)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+14 aliases)
	.globl gText_Rom_253900
gText_Rom_253900: @ 0x08253900
	.string "しかい『きょうしゅく　です！\pゆうしょう　おめでとう　ございます！\nこんかいの　きめてに　なったのは\lどんな　ところ　なので　しょうか？\pおねえさん『あたしも　{0xFD}{0x03}も\nとっても　がんばりました！\pだけど　きっと　コンテストに　でるまでに\nきょうりょくして　くれた　ひとたちの\lおかげだと　おもいますっ！\pしかい『では　この　よろこびを\nいちばん　つたえたい　かたに　むけて\lひとこと　メッセージを　おねがい　します！\pおねえさん『おーいっ！\p{0xFD}{0x04}さーん！　みてるーっ！？\nあたしたち　やったよーっ！\lどうも　ありがとーっ！"
	.byte EOS
	.if (. - gText_Rom_253900) > 0x106
	.error "gText_Rom_253900 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_253900) < 0x106
	.space 0x106 - (. - gText_Rom_253900)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+14 aliases)
	.globl gText_Rom_253A06
gText_Rom_253A06: @ 0x08253A06
	.string "しかい『きょうしゅく　です！\pしかし　こんかいは　ざんねん　でしたね！\nなにか　コメントを　おねがい　します！\pおねえさん『ざんねんでした……\nあたしも　{0xFD}{0x03}も　がんばったけど\lおうえん　してくれた　ひとたちに\lもうしわけ　ないです……\pしかい『うーん　たしかに　けづやが\nちょっと　いまいちな　かんじ　ですねー\pおねえさん『……{0xFD}{0x04}さん　ごめんね\nこんどは　がんばるから……\l……　……　うっ　……　うわーん！\pかんきゃく『ガヤガヤ　ガヤガヤ\pしかい『あわぁぁ……　しまった……\pそっ　それでは　このあたりで\nおわかれです！　みなさん　さようならー！"
	.byte EOS
	.if (. - gText_Rom_253A06) > 0x115
	.error "gText_Rom_253A06 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_253A06) < 0x115
	.space 0x115 - (. - gText_Rom_253A06)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+14 aliases)
	.globl gText_Rom_253B1B
gText_Rom_253B1B: @ 0x08253B1B
	.string "しかい『きょうしゅく　です！\pこんかいの　コンテスト　いかが　でした？\pおねえさん『ぜんぜん　だめでした……\nあたしの　{0xFD}{0x03}は　なんだか\lにんきが　なかった　みたいで……\pしかい『うーん　たしかに　けづやが\nちょっと　いまいちな　かんじ　ですねー\pおねえさん『……　……　……　……\n……　うっ　……　うっ　うわーん！\pかんきゃく『ガヤガヤ　ガヤガヤ\pしかい『あわぁぁ……　しまった……\pそっ　それでは　このあたりで\nおわかれです！　みなさん　さようならー！"
	.byte EOS
	.if (. - gText_Rom_253B1B) > 0xe6
	.error "gText_Rom_253B1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_253B1B) < 0xe6
	.space 0xe6 - (. - gText_Rom_253B1B)
	.endif
	@ analyzed canonical ROM range 0x08253C01-0x0825450F
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_JP_08253C01: @ 0x08253C01
	@ event command: special
	.byte 0x25
	.2byte 0x0044
	@ event command: incrementgamestat
	.byte 0xC3
	.byte 0x06
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08253C08: @ 0x08253C08
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x0043
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253C91 @ EventScript_JP_08253C91
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8009
	.2byte 0x8006
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824D1C6 @ gText_Rom_24D1C6
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253C3F @ EventScript_JP_08253C3F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253C74 @ EventScript_JP_08253C74
	@ event command: end
	.byte 0x02
EventScript_JP_08253C3F: @ 0x08253C3F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824D234 @ gText_Rom_24D234
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0005
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8005
	.2byte 0x8009
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x08242F08
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253C7E @ EventScript_JP_08253C7E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253C74 @ EventScript_JP_08253C74
	@ event command: end
	.byte 0x02
EventScript_JP_08253C74: @ 0x08253C74
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824D176 @ gText_Rom_24D176
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08253C7E: @ 0x08253C7E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824D25C @ gText_Rom_24D25C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: goto
	.byte 0x05
	.4byte 0x08253C01 @ EventScript_JP_08253C01
	.byte 0x02
EventScript_JP_08253C91: @ 0x08253C91
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824D1A1 @ gText_Rom_24D1A1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08253C9B: @ 0x08253C9B
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x0043
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253D51 @ EventScript_JP_08253D51
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8009
	.2byte 0x8006
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0069
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253CE0 @ EventScript_JP_08253CE0
	@ event command: setflag
	.byte 0x29
	.2byte 0x0069
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824D81A @ gText_Rom_24D81A
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253CFF @ EventScript_JP_08253CFF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253D34 @ EventScript_JP_08253D34
	@ event command: end
	.byte 0x02
EventScript_JP_08253CE0: @ 0x08253CE0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824D88D @ gText_Rom_24D88D
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253CFF @ EventScript_JP_08253CFF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253D34 @ EventScript_JP_08253D34
	@ event command: end
	.byte 0x02
EventScript_JP_08253CFF: @ 0x08253CFF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824D8DB @ gText_Rom_24D8DB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0005
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8005
	.2byte 0x8009
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: call
	.byte 0x04
	.4byte 0x08242F08
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253D3E @ EventScript_JP_08253D3E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253D34 @ EventScript_JP_08253D34
	@ event command: end
	.byte 0x02
EventScript_JP_08253D34: @ 0x08253D34
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824D921 @ gText_Rom_24D921
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08253D3E: @ 0x08253D3E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824D94E @ gText_Rom_24D94E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: goto
	.byte 0x05
	.4byte 0x08253C01 @ EventScript_JP_08253C01
	.byte 0x02
EventScript_JP_08253D51: @ 0x08253D51
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824D99F @ gText_Rom_24D99F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08253D5B: @ 0x08253D5B
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0045
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253C08 @ EventScript_JP_08253C08
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x0043
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253E67 @ EventScript_JP_08253E67
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8009
	.2byte 0x8006
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824CFA8 @ gText_Rom_24CFA8
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253DA4 @ EventScript_JP_08253DA4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253E5D @ EventScript_JP_08253E5D
	@ event command: end
	.byte 0x02
EventScript_JP_08253DA4: @ 0x08253DA4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824D01C @ gText_Rom_24D01C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: random
	.byte 0x8F
	.2byte 0x0003
	@ event command: copyvar
	.byte 0x19
	.2byte 0x800A
	.2byte 0x800D
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253DDB @ EventScript_JP_08253DDB
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253DE9 @ EventScript_JP_08253DE9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253DF7 @ EventScript_JP_08253DF7
	@ event command: end
	.byte 0x02
EventScript_JP_08253DDB: @ 0x08253DDB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824D03B @ gText_Rom_24D03B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08253E05 @ EventScript_JP_08253E05
	.byte 0x02
EventScript_JP_08253DE9: @ 0x08253DE9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824D065 @ gText_Rom_24D065
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08253E05 @ EventScript_JP_08253E05
	.byte 0x02
EventScript_JP_08253DF7: @ 0x08253DF7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824D097 @ gText_Rom_24D097
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08253E05 @ EventScript_JP_08253E05
	.byte 0x02
EventScript_JP_08253E05: @ 0x08253E05
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0007
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8005
	.2byte 0x8009
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: call
	.byte 0x04
	.4byte 0x08242F08
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253E5D @ EventScript_JP_08253E5D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824D0BA @ gText_Rom_24D0BA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x08242F08
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253E5D @ EventScript_JP_08253E5D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824D10B @ gText_Rom_24D10B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8007
	.2byte 0x800A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: goto
	.byte 0x05
	.4byte 0x08253C01 @ EventScript_JP_08253C01
	.byte 0x02
EventScript_JP_08253E5D: @ 0x08253E5D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824D176 @ gText_Rom_24D176
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08253E67: @ 0x08253E67
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824D1A1 @ gText_Rom_24D1A1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08253E71: @ 0x08253E71
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253F39 @ EventScript_JP_08253F39
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0006
	@ event command: special
	.byte 0x25
	.2byte 0x0043
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253F39 @ EventScript_JP_08253F39
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8009
	.2byte 0x8006
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824C585 @ gText_Rom_24C585
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253EB3 @ EventScript_JP_08253EB3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253EE8 @ EventScript_JP_08253EE8
	@ event command: end
	.byte 0x02
EventScript_JP_08253EB3: @ 0x08253EB3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824C5FA @ gText_Rom_24C5FA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000B
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8005
	.2byte 0x8009
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: call
	.byte 0x04
	.4byte 0x08242F08
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253EF2 @ EventScript_JP_08253EF2
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253EE8 @ EventScript_JP_08253EE8
	@ event command: end
	.byte 0x02
EventScript_JP_08253EE8: @ 0x08253EE8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824C713 @ gText_Rom_24C713
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08253EF2: @ 0x08253EF2
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0018
	@ event command: special
	.byte 0x25
	.2byte 0x0046
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824C635 @ gText_Rom_24C635
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000B
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8005
	.2byte 0x8009
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x08242F08
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253EE8 @ EventScript_JP_08253EE8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824C697 @ gText_Rom_24C697
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0006
	@ event command: goto
	.byte 0x05
	.4byte 0x08253C01 @ EventScript_JP_08253C01
	.byte 0x02
EventScript_JP_08253F39: @ 0x08253F39
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824C737 @ gText_Rom_24C737
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08253F43: @ 0x08253F43
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4086
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x08253FAD @ EventScript_JP_08253FAD
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0006
	@ event command: special
	.byte 0x25
	.2byte 0x0043
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253FAD @ EventScript_JP_08253FAD
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x4088
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253FAD @ EventScript_JP_08253FAD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253FA9 @ EventScript_JP_08253FA9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253FA9 @ EventScript_JP_08253FA9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253FA9 @ EventScript_JP_08253FA9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253FA9 @ EventScript_JP_08253FA9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253FAD @ EventScript_JP_08253FAD
	@ event command: end
	.byte 0x02
EventScript_JP_08253FA9: @ 0x08253FA9
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0322
	@ event command: return
	.byte 0x03
EventScript_JP_08253FAD: @ 0x08253FAD
	@ event command: return
	.byte 0x03
EventScript_JP_08253FAE: @ 0x08253FAE
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08254092 @ EventScript_JP_08254092
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x0043
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08254092 @ EventScript_JP_08254092
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8009
	.2byte 0x8006
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824C9D9 @ gText_Rom_24C9D9
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08253FF0 @ EventScript_JP_08253FF0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08254046 @ EventScript_JP_08254046
	@ event command: end
	.byte 0x02
EventScript_JP_08253FF0: @ 0x08253FF0
	@ event command: message
	.byte 0x67
	.4byte 0x0824CA3E @ gText_Rom_24CA3E
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoice
	.byte 0x6F
	.byte 0x14
	.byte 0x08
	.byte 0x2D
	.byte 0x01
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8008
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08254050 @ EventScript_JP_08254050
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08254059 @ EventScript_JP_08254059
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824CB1C @ gText_Rom_24CB1C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000C
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8005
	.2byte 0x8009
	@ event command: call
	.byte 0x04
	.4byte 0x08242F08
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08254062 @ EventScript_JP_08254062
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08254088 @ EventScript_JP_08254088
	@ event command: end
	.byte 0x02
EventScript_JP_08254046: @ 0x08254046
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824CA8E @ gText_Rom_24CA8E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08254050: @ 0x08254050
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824CABA @ gText_Rom_24CABA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_08254059: @ 0x08254059
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824CAE9 @ gText_Rom_24CAE9
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_08254062: @ 0x08254062
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08254088 @ EventScript_JP_08254088
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824CB57 @ gText_Rom_24CB57
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x0002
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8004
	.2byte 0x8008
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0007
	@ event command: goto
	.byte 0x05
	.4byte 0x08253C01 @ EventScript_JP_08253C01
	.byte 0x02
EventScript_JP_08254088: @ 0x08254088
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824CB89 @ gText_Rom_24CB89
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08254092: @ 0x08254092
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824CBCC @ gText_Rom_24CBCC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
	.byte 0x21, 0xBC, 0x40, 0x00, 0x00, 0x06, 0x01, 0xBE, 0x40, 0x25, 0x08, 0x16, 0x05, 0x80, 0x07, 0x00
	.byte 0x25, 0x43, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0xBE, 0x40, 0x25, 0x08, 0x2A, 0x96
	.byte 0x03, 0x03, 0x29, 0x96, 0x03, 0x03, 0x16, 0x05, 0x80, 0x08, 0x00, 0x25, 0x43, 0x00, 0x21, 0x0D
	.byte 0x80, 0x01, 0x00, 0x06, 0x01, 0xDE, 0x40, 0x25, 0x08, 0x16, 0x05, 0x80, 0x08, 0x00, 0x25, 0x44
	.byte 0x00, 0x03, 0x03, 0x62, 0x38, 0x00, 0x26, 0x0D, 0x80, 0xAC, 0x00, 0x19, 0x00, 0x80, 0x0D, 0x80
	.byte 0x21, 0x00, 0x80, 0x00, 0x00, 0x06, 0x01, 0x50, 0x41, 0x25, 0x08, 0x21, 0x00, 0x80, 0x01, 0x00
	.byte 0x06, 0x01, 0x56, 0x41, 0x25, 0x08, 0x21, 0x00, 0x80, 0x02, 0x00, 0x06, 0x01, 0x61, 0x41, 0x25
	.byte 0x08, 0x21, 0x00, 0x80, 0x03, 0x00, 0x06, 0x01, 0x6C, 0x41, 0x25, 0x08, 0x21, 0x00, 0x80, 0x04
	.byte 0x00, 0x06, 0x01, 0x77, 0x41, 0x25, 0x08, 0x21, 0x00, 0x80, 0x05, 0x00, 0x06, 0x01, 0x82, 0x41
	.byte 0x25, 0x08, 0x21, 0x00, 0x80, 0x06, 0x00, 0x06, 0x01, 0x8D, 0x41, 0x25, 0x08, 0x21, 0x00, 0x80
	.byte 0x07, 0x00, 0x06, 0x01, 0x98, 0x41, 0x25, 0x08, 0x21, 0x00, 0x80, 0x08, 0x00, 0x06, 0x01, 0xA3
	.byte 0x41, 0x25, 0x08, 0x02, 0x04, 0xB2, 0x41, 0x25, 0x08, 0x03, 0x04, 0xBA, 0x41, 0x25, 0x08, 0x04
	.byte 0xAE, 0x41, 0x25, 0x08, 0x03, 0x04, 0xC2, 0x41, 0x25, 0x08, 0x04, 0xB6, 0x41, 0x25, 0x08, 0x03
	.byte 0x04, 0xCA, 0x41, 0x25, 0x08, 0x04, 0xBE, 0x41, 0x25, 0x08, 0x03, 0x04, 0xD2, 0x41, 0x25, 0x08
	.byte 0x04, 0xC6, 0x41, 0x25, 0x08, 0x03, 0x04, 0xDA, 0x41, 0x25, 0x08, 0x04, 0xCE, 0x41, 0x25, 0x08
	.byte 0x03, 0x04, 0xE2, 0x41, 0x25, 0x08, 0x04, 0xD6, 0x41, 0x25, 0x08, 0x03, 0x04, 0xEA, 0x41, 0x25
	.byte 0x08, 0x04, 0xDE, 0x41, 0x25, 0x08, 0x03, 0x04, 0xDA, 0x41, 0x25, 0x08, 0x04, 0xE6, 0x41, 0x25
	.byte 0x08, 0x03, 0x29, 0x1C, 0x03, 0x03, 0x2A, 0x1C, 0x03, 0x03, 0x29, 0x1D, 0x03, 0x03, 0x2A, 0x1D
	.byte 0x03, 0x03, 0x29, 0x1E, 0x03, 0x03, 0x2A, 0x1E, 0x03, 0x03, 0x29, 0x1F, 0x03, 0x03, 0x2A, 0x1F
	.byte 0x03, 0x03, 0x29, 0x85, 0x03, 0x03, 0x2A, 0x85, 0x03, 0x03, 0x29, 0x86, 0x03, 0x03, 0x2A, 0x86
	.byte 0x03, 0x03, 0x29, 0x87, 0x03, 0x03, 0x2A, 0x87, 0x03, 0x03, 0x29, 0x88, 0x03, 0x03, 0x2A, 0x88
	.byte 0x03, 0x03
EventScript_JP_082541EE: @ 0x082541EE
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x06
	.2byte 0x0033
	.2byte 0x0000
	.4byte 0x08252E99 @ gText_Rom_252E99
	.4byte 0x08252F11 @ gText_Rom_252F11
	.4byte 0x0825322F @ gText_Rom_25322F
	.4byte 0x0825436E @ EventScript_JP_0825436E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08253218 @ gText_Rom_253218
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0825420E: @ 0x0825420E
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x06
	.2byte 0x0033
	.2byte 0x0000
	.4byte 0x082532E3 @ gText_Rom_2532E3
	.4byte 0x0825339D @ gText_Rom_25339D
	.4byte 0x0825335D @ gText_Rom_25335D
	.4byte 0x0825436E @ EventScript_JP_0825436E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0825333E @ gText_Rom_25333E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0825422E: @ 0x0825422E
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x06
	.2byte 0x0034
	.2byte 0x0000
	.4byte 0x08252ED4 @ gText_Rom_252ED4
	.4byte 0x082532C0 @ gText_Rom_2532C0
	.4byte 0x0825322F @ gText_Rom_25322F
	.4byte 0x082543DB @ EventScript_JP_082543DB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08253218 @ gText_Rom_253218
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0825424E: @ 0x0825424E
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x06
	.2byte 0x0034
	.2byte 0x0000
	.4byte 0x08253312 @ gText_Rom_253312
	.4byte 0x082533BF @ gText_Rom_2533BF
	.4byte 0x0825335D @ gText_Rom_25335D
	.4byte 0x082543DB @ EventScript_JP_082543DB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0825333E @ gText_Rom_25333E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0825426E: @ 0x0825426E
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x06
	.2byte 0x0035
	.2byte 0x0000
	.4byte 0x08252ED4 @ gText_Rom_252ED4
	.4byte 0x082532C0 @ gText_Rom_2532C0
	.4byte 0x0825322F @ gText_Rom_25322F
	.4byte 0x082543DB @ EventScript_JP_082543DB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08253218 @ gText_Rom_253218
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0825428E: @ 0x0825428E
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x06
	.2byte 0x0035
	.2byte 0x0000
	.4byte 0x08253312 @ gText_Rom_253312
	.4byte 0x082533BF @ gText_Rom_2533BF
	.4byte 0x0825335D @ gText_Rom_25335D
	.4byte 0x082543DB @ EventScript_JP_082543DB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0825333E @ gText_Rom_25333E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082542AE: @ 0x082542AE
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x06
	.2byte 0x0036
	.2byte 0x0000
	.4byte 0x08252ED4 @ gText_Rom_252ED4
	.4byte 0x082532C0 @ gText_Rom_2532C0
	.4byte 0x0825322F @ gText_Rom_25322F
	.4byte 0x082543DB @ EventScript_JP_082543DB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08253218 @ gText_Rom_253218
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082542CE: @ 0x082542CE
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x06
	.2byte 0x0036
	.2byte 0x0000
	.4byte 0x08253312 @ gText_Rom_253312
	.4byte 0x082533BF @ gText_Rom_2533BF
	.4byte 0x0825335D @ gText_Rom_25335D
	.4byte 0x082543DB @ EventScript_JP_082543DB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0825333E @ gText_Rom_25333E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082542EE: @ 0x082542EE
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x06
	.2byte 0x0037
	.2byte 0x0000
	.4byte 0x08252ED4 @ gText_Rom_252ED4
	.4byte 0x082532C0 @ gText_Rom_2532C0
	.4byte 0x0825322F @ gText_Rom_25322F
	.4byte 0x082543DB @ EventScript_JP_082543DB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08253218 @ gText_Rom_253218
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0825430E: @ 0x0825430E
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x06
	.2byte 0x0037
	.2byte 0x0000
	.4byte 0x08253312 @ gText_Rom_253312
	.4byte 0x082533BF @ gText_Rom_2533BF
	.4byte 0x0825335D @ gText_Rom_25335D
	.4byte 0x082543DB @ EventScript_JP_082543DB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0825333E @ gText_Rom_25333E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0825432E: @ 0x0825432E
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x06
	.2byte 0x0038
	.2byte 0x0000
	.4byte 0x08252ED4 @ gText_Rom_252ED4
	.4byte 0x082532C0 @ gText_Rom_2532C0
	.4byte 0x0825322F @ gText_Rom_25322F
	.4byte 0x082543DB @ EventScript_JP_082543DB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08253218 @ gText_Rom_253218
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0825434E: @ 0x0825434E
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x06
	.2byte 0x0038
	.2byte 0x0000
	.4byte 0x08253312 @ gText_Rom_253312
	.4byte 0x082533BF @ gText_Rom_2533BF
	.4byte 0x0825335D @ gText_Rom_25335D
	.4byte 0x082543DB @ EventScript_JP_082543DB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0825333E @ gText_Rom_25333E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0825436E: @ 0x0825436E
	@ event command: special
	.byte 0x25
	.2byte 0x00AE
	@ event command: special
	.byte 0x25
	.2byte 0x00B3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082543AC @ EventScript_JP_082543AC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082543B7 @ EventScript_JP_082543B7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082543C9 @ EventScript_JP_082543C9
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08254506 @ EventScript_JP_08254506
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08252F36 @ gText_Rom_252F36
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: goto
	.byte 0x05
	.4byte 0x082544BF @ EventScript_JP_082544BF
	.byte 0x02
EventScript_JP_082543AC: @ 0x082543AC
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8004
	.4byte 0x08254465 @ Movement_JP_08254465
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_082543B7: @ 0x082543B7
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8004
	.4byte 0x08254467 @ Movement_JP_08254467
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8005
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_082543C9: @ 0x082543C9
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8004
	.4byte 0x08254469 @ Movement_JP_08254469
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8005
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_082543DB: @ 0x082543DB
	@ event command: special
	.byte 0x25
	.2byte 0x00AE
	@ event command: special
	.byte 0x25
	.2byte 0x00B3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082543AC @ EventScript_JP_082543AC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082543B7 @ EventScript_JP_082543B7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082543C9 @ EventScript_JP_082543C9
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08254506 @ EventScript_JP_08254506
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00B1
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825446B @ EventScript_JP_0825446B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08252FC1 @ gText_Rom_252FC1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00B2
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08254479 @ EventScript_JP_08254479
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08254487 @ EventScript_JP_08254487
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08254495 @ EventScript_JP_08254495
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082544A3 @ EventScript_JP_082544A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082544B1 @ EventScript_JP_082544B1
	@ event command: end
	.byte 0x02
Movement_JP_08254465: @ 0x08254465
	@ object movement sequence
	.byte 0x1D @ walk_in_place_down
	.byte 0xFE @ step_end
Movement_JP_08254467: @ 0x08254467
	@ object movement sequence
	.byte 0x1E @ walk_in_place_up
	.byte 0xFE @ step_end
Movement_JP_08254469: @ 0x08254469
	@ object movement sequence
	.byte 0x1F @ walk_in_place_left
	.byte 0xFE @ step_end
EventScript_JP_0825446B: @ 0x0825446B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08253257 @ gText_Rom_253257
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: goto
	.byte 0x05
	.4byte 0x082544BF @ EventScript_JP_082544BF
	.byte 0x02
EventScript_JP_08254479: @ 0x08254479
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0825312E @ gText_Rom_25312E
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: goto
	.byte 0x05
	.4byte 0x082544BF @ EventScript_JP_082544BF
	.byte 0x02
EventScript_JP_08254487: @ 0x08254487
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08253007 @ gText_Rom_253007
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: goto
	.byte 0x05
	.4byte 0x082544BF @ EventScript_JP_082544BF
	.byte 0x02
EventScript_JP_08254495: @ 0x08254495
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08253048 @ gText_Rom_253048
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: goto
	.byte 0x05
	.4byte 0x082544BF @ EventScript_JP_082544BF
	.byte 0x02
EventScript_JP_082544A3: @ 0x082544A3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082530A4 @ gText_Rom_2530A4
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: goto
	.byte 0x05
	.4byte 0x082544BF @ EventScript_JP_082544BF
	.byte 0x02
EventScript_JP_082544B1: @ 0x082544B1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082530EB @ gText_Rom_2530EB
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: goto
	.byte 0x05
	.4byte 0x082544BF @ EventScript_JP_082544BF
	.byte 0x02
EventScript_JP_082544BF: @ 0x082544BF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082544F9 @ EventScript_JP_082544F9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08253148 @ gText_Rom_253148
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000A
	@ event command: call
	.byte 0x04
	.4byte 0x08242F08
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082544F9 @ EventScript_JP_082544F9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08253179 @ gText_Rom_253179
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x00AD
	@ event command: setflag
	.byte 0x29
	.2byte 0x0001
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082544F9: @ 0x082544F9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082531EC @ gText_Rom_2531EC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x0001
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08254506: @ 0x08254506
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08253218 @ gText_Rom_253218
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
