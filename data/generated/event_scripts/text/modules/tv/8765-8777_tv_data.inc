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
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	.byte 0x25
	.2byte 0x0044
	incrementgamestat 0x06
	release
	end
EventScript_JP_08253C08: @ 0x08253C08
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8005, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x0043
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08253C91
	copyvar 0x8009, 0x8006
	loadword 0x00, gText_Rom_24D1C6
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08253C3F
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08253C74
	end
EventScript_JP_08253C3F: @ 0x08253C3F
	loadword 0x00, gText_Rom_24D234
	callstd 0x04
	setvar 0x8004, 0x0005
	copyvar 0x8005, 0x8009
	setvar 0x8006, 0x0001
	call 0x08242F08
	lock
	faceplayer
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08253C7E
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08253C74
	end
EventScript_JP_08253C74: @ 0x08253C74
	loadword 0x00, gText_Rom_24D176
	callstd 0x04
	release
	end
EventScript_JP_08253C7E: @ 0x08253C7E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_24D25C
	callstd 0x04
	setvar 0x8005, 0x0001
	goto EventScript_JP_08253C01
	.byte 0x02
EventScript_JP_08253C91: @ 0x08253C91
	loadword 0x00, gText_Rom_24D1A1
	callstd 0x04
	release
	end
.globl EventScript_JP_08253C9B
EventScript_JP_08253C9B: @ 0x08253C9B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	setvar 0x8005, 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x0043
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08253D51
	copyvar 0x8009, 0x8006
	checkflag 0x0069
	goto_if 0x01, EventScript_JP_08253CE0
	setflag 0x0069
	loadword 0x00, gText_Rom_24D81A
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08253CFF
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08253D34
	end
EventScript_JP_08253CE0: @ 0x08253CE0
	loadword 0x00, gText_Rom_24D88D
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08253CFF
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08253D34
	end
EventScript_JP_08253CFF: @ 0x08253CFF
	loadword 0x00, gText_Rom_24D8DB
	callstd 0x04
	setvar 0x8004, 0x0005
	copyvar 0x8005, 0x8009
	setvar 0x8006, 0x0000
	call 0x08242F08
	lock
	faceplayer
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08253D3E
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08253D34
	end
EventScript_JP_08253D34: @ 0x08253D34
	loadword 0x00, gText_Rom_24D921
	callstd 0x04
	release
	end
EventScript_JP_08253D3E: @ 0x08253D3E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_24D94E
	callstd 0x04
	setvar 0x8005, 0x0002
	goto EventScript_JP_08253C01
	.byte 0x02
EventScript_JP_08253D51: @ 0x08253D51
	loadword 0x00, gText_Rom_24D99F
	callstd 0x04
	release
	end
.globl EventScript_JP_08253D5B
EventScript_JP_08253D5B: @ 0x08253D5B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	specialvar_ 0x800D, 0x0045
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08253C08
	setvar 0x8005, 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x0043
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08253E67
	copyvar 0x8009, 0x8006
	loadword 0x00, gText_Rom_24CFA8
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08253DA4
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08253E5D
	end
EventScript_JP_08253DA4: @ 0x08253DA4
	loadword 0x00, gText_Rom_24D01C
	callstd 0x04
	random 0x0003
	copyvar 0x800A, 0x800D
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08253DDB
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08253DE9
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08253DF7
	end
EventScript_JP_08253DDB: @ 0x08253DDB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_24D03B
	callstd 0x04
	goto EventScript_JP_08253E05
	.byte 0x02
EventScript_JP_08253DE9: @ 0x08253DE9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_24D065
	callstd 0x04
	goto EventScript_JP_08253E05
	.byte 0x02
EventScript_JP_08253DF7: @ 0x08253DF7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_24D097
	callstd 0x04
	goto EventScript_JP_08253E05
	.byte 0x02
EventScript_JP_08253E05: @ 0x08253E05
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0007
	copyvar 0x8005, 0x8009
	setvar 0x8006, 0x0000
	call 0x08242F08
	lock
	faceplayer
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08253E5D
	loadword 0x00, gText_Rom_24D0BA
	callstd 0x04
	setvar 0x8006, 0x0001
	call 0x08242F08
	lock
	faceplayer
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08253E5D
	loadword 0x00, gText_Rom_24D10B
	callstd 0x04
	copyvar 0x8007, 0x800A
	setvar 0x8005, 0x0003
	goto EventScript_JP_08253C01
	.byte 0x02
EventScript_JP_08253E5D: @ 0x08253E5D
	loadword 0x00, gText_Rom_24D176
	callstd 0x04
	release
	end
EventScript_JP_08253E67: @ 0x08253E67
	loadword 0x00, gText_Rom_24D1A1
	callstd 0x04
	release
	end
.globl EventScript_JP_08253E71
EventScript_JP_08253E71: @ 0x08253E71
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x0002
	goto_if 0x01, EventScript_JP_08253F39
	setvar 0x8005, 0x0006
	@ event command: special
	.byte 0x25
	.2byte 0x0043
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08253F39
	copyvar 0x8009, 0x8006
	loadword 0x00, gText_Rom_24C585
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08253EB3
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08253EE8
	end
EventScript_JP_08253EB3: @ 0x08253EB3
	loadword 0x00, gText_Rom_24C5FA
	callstd 0x04
	setvar 0x8004, 0x000B
	copyvar 0x8005, 0x8009
	setvar 0x8006, 0x0000
	call 0x08242F08
	lock
	faceplayer
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08253EF2
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08253EE8
	end
EventScript_JP_08253EE8: @ 0x08253EE8
	loadword 0x00, gText_Rom_24C713
	callstd 0x04
	release
	end
EventScript_JP_08253EF2: @ 0x08253EF2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0018
	@ event command: special
	.byte 0x25
	.2byte 0x0046
	loadword 0x00, gText_Rom_24C635
	callstd 0x04
	setvar 0x8004, 0x000B
	copyvar 0x8005, 0x8009
	setvar 0x8006, 0x0001
	call 0x08242F08
	lock
	faceplayer
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08253EE8
	loadword 0x00, gText_Rom_24C697
	callstd 0x04
	setflag 0x0002
	setvar 0x8005, 0x0006
	goto EventScript_JP_08253C01
	.byte 0x02
EventScript_JP_08253F39: @ 0x08253F39
	loadword 0x00, gText_Rom_24C737
	callstd 0x04
	release
	end
EventScript_JP_08253F43: @ 0x08253F43
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	compare_var_to_value 0x4086, 0x0002
	goto_if 0x05, EventScript_JP_08253FAD
	setvar 0x8005, 0x0006
	@ event command: special
	.byte 0x25
	.2byte 0x0043
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08253FAD
	copyvar 0x8000, 0x4088
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08253FAD
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08253FA9
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08253FA9
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08253FA9
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08253FA9
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_08253FAD
	end
EventScript_JP_08253FA9: @ 0x08253FA9
	clearflag 0x0322
	return
EventScript_JP_08253FAD: @ 0x08253FAD
	return
.globl EventScript_JP_08253FAE
EventScript_JP_08253FAE: @ 0x08253FAE
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x0002
	goto_if 0x01, EventScript_JP_08254092
	setvar 0x8005, 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x0043
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08254092
	copyvar 0x8009, 0x8006
	loadword 0x00, gText_Rom_24C9D9
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08253FF0
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08254046
	end
EventScript_JP_08253FF0: @ 0x08253FF0
	message gText_Rom_24CA3E
	waitmessage
	multichoice 0x14, 0x08, 0x2D, 0x01
	copyvar 0x8008, 0x800D
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_08254050
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_08254059
	loadword 0x00, gText_Rom_24CB1C
	callstd 0x04
	setvar 0x8004, 0x000C
	copyvar 0x8005, 0x8009
	call 0x08242F08
	lock
	faceplayer
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08254062
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08254088
	end
EventScript_JP_08254046: @ 0x08254046
	loadword 0x00, gText_Rom_24CA8E
	callstd 0x04
	release
	end
EventScript_JP_08254050: @ 0x08254050
	loadword 0x00, gText_Rom_24CABA
	callstd 0x04
	return
EventScript_JP_08254059: @ 0x08254059
	loadword 0x00, gText_Rom_24CAE9
	callstd 0x04
	return
EventScript_JP_08254062: @ 0x08254062
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08254088
	loadword 0x00, gText_Rom_24CB57
	callstd 0x04
	setflag 0x0002
	copyvar 0x8004, 0x8008
	setvar 0x8005, 0x0007
	goto EventScript_JP_08253C01
	.byte 0x02
EventScript_JP_08254088: @ 0x08254088
	loadword 0x00, gText_Rom_24CB89
	callstd 0x04
	release
	end
EventScript_JP_08254092: @ 0x08254092
	loadword 0x00, gText_Rom_24CBCC
	callstd 0x04
	release
	end
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
.globl EventScript_JP_082541EE
EventScript_JP_082541EE: @ 0x082541EE
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x06
	.2byte 0x0033
	.2byte 0x0000
	.4byte gText_Rom_252E99 @ gText_Rom_252E99
	.4byte gText_Rom_252F11 @ gText_Rom_252F11
	.4byte gText_Rom_25322F @ gText_Rom_25322F
	.4byte EventScript_JP_0825436E @ EventScript_JP_0825436E
	loadword 0x00, gText_Rom_253218
	callstd 0x04
	release
	end
.globl EventScript_JP_0825420E
EventScript_JP_0825420E: @ 0x0825420E
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x06
	.2byte 0x0033
	.2byte 0x0000
	.4byte gText_Rom_2532E3 @ gText_Rom_2532E3
	.4byte gText_Rom_25339D @ gText_Rom_25339D
	.4byte gText_Rom_25335D @ gText_Rom_25335D
	.4byte EventScript_JP_0825436E @ EventScript_JP_0825436E
	loadword 0x00, gText_Rom_25333E
	callstd 0x04
	release
	end
.globl EventScript_JP_0825422E
EventScript_JP_0825422E: @ 0x0825422E
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x06
	.2byte 0x0034
	.2byte 0x0000
	.4byte gText_Rom_252ED4 @ gText_Rom_252ED4
	.4byte gText_Rom_2532C0 @ gText_Rom_2532C0
	.4byte gText_Rom_25322F @ gText_Rom_25322F
	.4byte EventScript_JP_082543DB @ EventScript_JP_082543DB
	loadword 0x00, gText_Rom_253218
	callstd 0x04
	release
	end
.globl EventScript_JP_0825424E
EventScript_JP_0825424E: @ 0x0825424E
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x06
	.2byte 0x0034
	.2byte 0x0000
	.4byte gText_Rom_253312 @ gText_Rom_253312
	.4byte gText_Rom_2533BF @ gText_Rom_2533BF
	.4byte gText_Rom_25335D @ gText_Rom_25335D
	.4byte EventScript_JP_082543DB @ EventScript_JP_082543DB
	loadword 0x00, gText_Rom_25333E
	callstd 0x04
	release
	end
.globl EventScript_JP_0825426E
EventScript_JP_0825426E: @ 0x0825426E
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x06
	.2byte 0x0035
	.2byte 0x0000
	.4byte gText_Rom_252ED4 @ gText_Rom_252ED4
	.4byte gText_Rom_2532C0 @ gText_Rom_2532C0
	.4byte gText_Rom_25322F @ gText_Rom_25322F
	.4byte EventScript_JP_082543DB @ EventScript_JP_082543DB
	loadword 0x00, gText_Rom_253218
	callstd 0x04
	release
	end
.globl EventScript_JP_0825428E
EventScript_JP_0825428E: @ 0x0825428E
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x06
	.2byte 0x0035
	.2byte 0x0000
	.4byte gText_Rom_253312 @ gText_Rom_253312
	.4byte gText_Rom_2533BF @ gText_Rom_2533BF
	.4byte gText_Rom_25335D @ gText_Rom_25335D
	.4byte EventScript_JP_082543DB @ EventScript_JP_082543DB
	loadword 0x00, gText_Rom_25333E
	callstd 0x04
	release
	end
.globl EventScript_JP_082542AE
EventScript_JP_082542AE: @ 0x082542AE
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x06
	.2byte 0x0036
	.2byte 0x0000
	.4byte gText_Rom_252ED4 @ gText_Rom_252ED4
	.4byte gText_Rom_2532C0 @ gText_Rom_2532C0
	.4byte gText_Rom_25322F @ gText_Rom_25322F
	.4byte EventScript_JP_082543DB @ EventScript_JP_082543DB
	loadword 0x00, gText_Rom_253218
	callstd 0x04
	release
	end
.globl EventScript_JP_082542CE
EventScript_JP_082542CE: @ 0x082542CE
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x06
	.2byte 0x0036
	.2byte 0x0000
	.4byte gText_Rom_253312 @ gText_Rom_253312
	.4byte gText_Rom_2533BF @ gText_Rom_2533BF
	.4byte gText_Rom_25335D @ gText_Rom_25335D
	.4byte EventScript_JP_082543DB @ EventScript_JP_082543DB
	loadword 0x00, gText_Rom_25333E
	callstd 0x04
	release
	end
.globl EventScript_JP_082542EE
EventScript_JP_082542EE: @ 0x082542EE
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x06
	.2byte 0x0037
	.2byte 0x0000
	.4byte gText_Rom_252ED4 @ gText_Rom_252ED4
	.4byte gText_Rom_2532C0 @ gText_Rom_2532C0
	.4byte gText_Rom_25322F @ gText_Rom_25322F
	.4byte EventScript_JP_082543DB @ EventScript_JP_082543DB
	loadword 0x00, gText_Rom_253218
	callstd 0x04
	release
	end
.globl EventScript_JP_0825430E
EventScript_JP_0825430E: @ 0x0825430E
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x06
	.2byte 0x0037
	.2byte 0x0000
	.4byte gText_Rom_253312 @ gText_Rom_253312
	.4byte gText_Rom_2533BF @ gText_Rom_2533BF
	.4byte gText_Rom_25335D @ gText_Rom_25335D
	.4byte EventScript_JP_082543DB @ EventScript_JP_082543DB
	loadword 0x00, gText_Rom_25333E
	callstd 0x04
	release
	end
.globl EventScript_JP_0825432E
EventScript_JP_0825432E: @ 0x0825432E
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x06
	.2byte 0x0038
	.2byte 0x0000
	.4byte gText_Rom_252ED4 @ gText_Rom_252ED4
	.4byte gText_Rom_2532C0 @ gText_Rom_2532C0
	.4byte gText_Rom_25322F @ gText_Rom_25322F
	.4byte EventScript_JP_082543DB @ EventScript_JP_082543DB
	loadword 0x00, gText_Rom_253218
	callstd 0x04
	release
	end
.globl EventScript_JP_0825434E
EventScript_JP_0825434E: @ 0x0825434E
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x06
	.2byte 0x0038
	.2byte 0x0000
	.4byte gText_Rom_253312 @ gText_Rom_253312
	.4byte gText_Rom_2533BF @ gText_Rom_2533BF
	.4byte gText_Rom_25335D @ gText_Rom_25335D
	.4byte EventScript_JP_082543DB @ EventScript_JP_082543DB
	loadword 0x00, gText_Rom_25333E
	callstd 0x04
	release
	end
EventScript_JP_0825436E: @ 0x0825436E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	.byte 0x25
	.2byte 0x00AE
	@ event command: special
	.byte 0x25
	.2byte 0x00B3
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_082543AC
	compare_var_to_value 0x800C, 0x0001
	call_if 0x01, EventScript_JP_082543B7
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_082543C9
	checkflag 0x0001
	goto_if 0x01, EventScript_JP_08254506
	loadword 0x00, gText_Rom_252F36
	callstd 0x05
	goto EventScript_JP_082544BF
	.byte 0x02
EventScript_JP_082543AC: @ 0x082543AC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8004
	.4byte Route118_Movement_WalkInPlaceDown @ Route118_Movement_WalkInPlaceDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_082543B7: @ 0x082543B7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8004
	.4byte Route118_Movement_WalkInPlaceUp @ Route118_Movement_WalkInPlaceUp
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8005
	.4byte PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_082543C9: @ 0x082543C9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8004
	.4byte Route118_Movement_WalkInPlaceLeft @ Route118_Movement_WalkInPlaceLeft
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8005
	.4byte PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_082543DB: @ 0x082543DB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	.byte 0x25
	.2byte 0x00AE
	@ event command: special
	.byte 0x25
	.2byte 0x00B3
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_082543AC
	compare_var_to_value 0x800C, 0x0001
	call_if 0x01, EventScript_JP_082543B7
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_082543C9
	checkflag 0x0001
	goto_if 0x01, EventScript_JP_08254506
	specialvar_ 0x800D, 0x00B1
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0825446B
	loadword 0x00, gText_Rom_252FC1
	callstd 0x04
	specialvar_ 0x800D, 0x00B2
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08254479
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08254487
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08254495
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_082544A3
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_082544B1
	end
Route118_Movement_WalkInPlaceDown: @ 0x08254465
	@ object movement sequence
	walk_in_place_down
	step_end
Route118_Movement_WalkInPlaceUp: @ 0x08254467
	@ object movement sequence
	walk_in_place_up
	step_end
Route118_Movement_WalkInPlaceLeft: @ 0x08254469
	@ object movement sequence
	walk_in_place_left
	step_end
EventScript_JP_0825446B: @ 0x0825446B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_253257
	callstd 0x05
	goto EventScript_JP_082544BF
	.byte 0x02
EventScript_JP_08254479: @ 0x08254479
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_25312E
	callstd 0x05
	goto EventScript_JP_082544BF
	.byte 0x02
EventScript_JP_08254487: @ 0x08254487
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_253007
	callstd 0x05
	goto EventScript_JP_082544BF
	.byte 0x02
EventScript_JP_08254495: @ 0x08254495
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_253048
	callstd 0x05
	goto EventScript_JP_082544BF
	.byte 0x02
EventScript_JP_082544A3: @ 0x082544A3
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_2530A4
	callstd 0x05
	goto EventScript_JP_082544BF
	.byte 0x02
EventScript_JP_082544B1: @ 0x082544B1
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_2530EB
	callstd 0x05
	goto EventScript_JP_082544BF
	.byte 0x02
EventScript_JP_082544BF: @ 0x082544BF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082544F9
	loadword 0x00, gText_Rom_253148
	callstd 0x04
	setvar 0x8004, 0x000A
	call 0x08242F08
	lock
	faceplayer
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082544F9
	loadword 0x00, gText_Rom_253179
	callstd 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x00AD
	setflag 0x0001
	release
	end
EventScript_JP_082544F9: @ 0x082544F9
	loadword 0x00, gText_Rom_2531EC
	callstd 0x04
	setflag 0x0001
	release
	end
EventScript_JP_08254506: @ 0x08254506
	loadword 0x00, gText_Rom_253218
	callstd 0x04
	release
	end
