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
