	@ data/maps/BattleFrontier_Lounge3/scripts.inc:203 BattleFrontier_Lounge3_Text_YouLookToughExplainGambling
	.globl gText_Rom_23799B
gText_Rom_23799B: @ 0x0823799B
	.string "…… ん?\nあんた つよそうだねぇ……\pへっへ…… ……\nちょっと ィイはなしが\lあるから きいてけよ!\pじつは おれたち グループはな\nバトルフロンティアの なかで\lちょっとした ゲームを してんのよ……\pルールは かんたん だぜー\nまずは まいかい どこかの しせつを\lひとつ えらぶ!\pつぎに そこに ちょうせん してる\nトレーナーの だれか ひとりを えらんで\lじぶんの バトルポイントを かけるのよ!\pんで いちばん いい せいせきを\nだした トレーナーに かけてた やつが\lバトルポイントを ひとりじめ すんの!\pなあっ? かんたん だろ?\nんで……"
	.byte EOS
	.if (. - gText_Rom_23799B) > 0x11a
	.error "gText_Rom_23799B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23799B) < 0x11a
	.space 0x11a - (. - gText_Rom_23799B)
	.endif
