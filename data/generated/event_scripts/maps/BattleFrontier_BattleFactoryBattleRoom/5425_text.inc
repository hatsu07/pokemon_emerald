	@ data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.inc:246 BattleFrontier_BattleFactoryBattleRoom_Text_NolandImFactoryHead
	.globl gText_Rom_232E0A
gText_Rom_232E0A: @ 0x08232E0A
	.string "おれの なまえは ダツラ!\nいちおう ここの せきにんしゃで\lファクトリーヘッド ってのを やってる!\pおめえの バトルトレードの\nデータは みせて もらったぜ!\pまあまあ いいスジ してる みてぇ だが\nまだまだ あたまが カッテぇ なぁ!\pイイかー? ちしき っつうのは\nただ ほんを よんだり\lつくえに むかってる だけじゃ\lなーんにも みには ならねぇんだぜ!\pじぶんの こころと からだで じっさいに\nたいけん して みねぇと なあ……\pおれも おめえと おんなじ じょうけん!\nレンタルポケモンで たたかう!!"
	.byte EOS
	.if (. - gText_Rom_232E0A) > 0x106
	.error "gText_Rom_232E0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232E0A) < 0x106
	.space 0x106 - (. - gText_Rom_232E0A)
	.endif
