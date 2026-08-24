	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:274 BattleFrontier_BattlePikeLobby_Text_WelcomeToBattlePike
	.globl gText_Rom_233529
gText_Rom_233529: @ 0x08233529
	.string "トレーナーの うんを ためす ばしょ……\nバトルチューブへ ようこそ……\pバトルゲームへの ごあんないは\nこちらで ございます……"
	.byte EOS
	.if (. - gText_Rom_233529) > 0x42
	.error "gText_Rom_233529 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233529) < 0x42
	.space 0x42 - (. - gText_Rom_233529)
	.endif
	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:280 BattleFrontier_BattlePikeLobby_Text_TakeChallenge
	.globl gText_Rom_23356B
gText_Rom_23356B: @ 0x0823356B
	.string "バトルゲームに\nちょうせん されますか……?"
	.byte EOS
	.if (. - gText_Rom_23356B) > 0x17
	.error "gText_Rom_23356B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23356B) < 0x17
	.space 0x17 - (. - gText_Rom_23356B)
	.endif
	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:284 BattleFrontier_BattlePikeLobby_Text_ExplainBattlePike
	.globl gText_Rom_233582
gText_Rom_233582: @ 0x08233582
	.string "こちらでは バトルゲームと いう\nもよおしを かいさいして おります\pバトルゲームの ルールは かんたん……\p3つの みちを えらびながら\nバトルチューブの いちばん おくに ある\lゴールの へやを めざして\lすすんで いく だけで よいのです\p…… ただし えらんだ みちの さきで\nなにが おこるかは おきゃくさまの\lうん しだい ですが……\pもしも ゴールに つくことが できたなら\nバトルポイントを さしあげましょう\pなお ゲームの ちょうせんを\nちゅうだんしたい ばあいは\lおおべやに たいき している スタッフに\lおもうしつけ ください……\pレポートを かかないと\nゲームの さいかいが できません……\pくれぐれも ごちゅうい ください……"
	.byte EOS
	.if (. - gText_Rom_233582) > 0x147
	.error "gText_Rom_233582 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233582) < 0x147
	.space 0x147 - (. - gText_Rom_233582)
	.endif
	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:303 BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou
	.globl gText_Rom_2336C9
gText_Rom_2336C9: @ 0x082336C9
	.string "では またの きかいを\nおまちして おります……"
	.byte EOS
	.if (. - gText_Rom_2336C9) > 0x19
	.error "gText_Rom_2336C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2336C9) < 0x19
	.space 0x19 - (. - gText_Rom_2336C9)
	.endif
	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:307 BattleFrontier_BattlePikeLobby_Text_WhichChallengeMode
	.globl gText_Rom_2336E2
gText_Rom_2336E2: @ 0x082336E2
	.string "レベル50と オープンレベルの ゲーム\nどちらに ちょうせん しますか?"
	.byte EOS
	.if (. - gText_Rom_2336E2) > 0x25
	.error "gText_Rom_2336E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2336E2) < 0x25
	.space 0x25 - (. - gText_Rom_2336E2)
	.endif
	@ field-script:0x23341B FieldScriptText_233707
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_233707
gText_Rom_233707: @ 0x08233707
	.string "……　おきゃくさま\pバトルゲームに　さんかできる\nポケモンが　3ひき　おりません……\pさんかには　レベルが　50いかで\nすべて　ちがう　しゅるいの　ポケモンを\l3ひき　ごようい　ください\pまた　もたせる　どうぐも　すべて\nちがうもので　なければ　いけません……\pなお　タマゴ{0xFD}{0x02}さんか　させる　ことは　できません\pじゅんびが　ととのいましたら\nまた　おこしください……"
	.byte EOS
	.if (. - gText_Rom_233707) != 0xb9
	.error "gText_Rom_233707 must retain its original byte length"
	.endif
	.globl gText_Rom_2337A4
	.set gText_Rom_2337A4, gText_Rom_233707 + 0x9d
	@ field-script:0x233428 FieldScriptText_2337C0
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2337C0
gText_Rom_2337C0: @ 0x082337C0
	.string "……　おきゃくさま\pバトルゲームに　さんかできる\nポケモンが　3ひき　おりません……\pさんかには　すべて　ちがう　しゅるいの\nポケモンを　3ひき　ごようい　ください\pまた　もたせる　どうぐも　すべて\nちがうもので　なければ　いけません……\pなお　タマゴ{0xFD}{0x02}さんか　させる　ことは　できません\pじゅんびが　ととのいましたら\nまた　おこしください……"
	.byte EOS
	.if (. - gText_Rom_2337C0) != 0xae
	.error "gText_Rom_2337C0 must retain its original byte length"
	.endif
	.globl gText_Rom_233852
	.set gText_Rom_233852, gText_Rom_2337C0 + 0x92
	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:336 BattleFrontier_BattlePikeLobby_Text_PleaseChooseThreeMons
	.globl gText_Rom_23386E
gText_Rom_23386E: @ 0x0823386E
	.string "それでは ゲームに ちょうせんする\nポケモンを 3ひき おえらび ください……"
	.byte EOS
	.if (. - gText_Rom_23386E) > 0x28
	.error "gText_Rom_23386E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23386E) < 0x28
	.space 0x28 - (. - gText_Rom_23386E)
	.endif
