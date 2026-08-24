	@ field-script:0x21E5B4 FieldScriptText_21E7A3
	.globl gText_Rom_21E7A3
gText_Rom_21E7A3: @ 0x0821E7A3
	.string "カホ『ふたりの　ラブラブ　パワーでも\nかてない　だなんて\lあなた　すごい　トレーナー　なのね！"
	.byte EOS
	.if (. - gText_Rom_21E7A3) > 0x30
	.error "gText_Rom_21E7A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E7A3) < 0x30
	.space 0x30 - (. - gText_Rom_21E7A3)
	.endif

	@ trainerbattle-cfg:0x21E5A0 TrainerBattleText_21E7D3
	.globl gText_Rom_21E7D3
gText_Rom_21E7D3: @ 0x0821E7D3
	.string "カホ『しょうぶ　したかったのに……\nポケモン　2ひき　いないのね……"
	.byte EOS
	.if (. - gText_Rom_21E7D3) > 0x23
	.error "gText_Rom_21E7D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E7D3) < 0x23
	.space 0x23 - (. - gText_Rom_21E7D3)
	.endif

	@ trainerbattle-cfg:0x21E5BB TrainerBattleText_21E7F6
	.globl gText_Rom_21E7F6
gText_Rom_21E7F6: @ 0x0821E7F6
	.string "キミ　ちょうど　いいところに　きたね！\pボク　たいくつで　たまらないんだ\nちょっと　たのしませて　くれよ"
	.byte EOS
	.if (. - gText_Rom_21E7F6) > 0x35
	.error "gText_Rom_21E7F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E7F6) < 0x35
	.space 0x35 - (. - gText_Rom_21E7F6)
	.endif

	@ trainerbattle-cfg:0x21E5BB TrainerBattleText_21E82B
	.globl gText_Rom_21E82B
gText_Rom_21E82B: @ 0x0821E82B
	.string "……もう　いいよ"
	.byte EOS
	.if (. - gText_Rom_21E82B) > 0x9
	.error "gText_Rom_21E82B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E82B) < 0x9
	.space 0x9 - (. - gText_Rom_21E82B)
	.endif
