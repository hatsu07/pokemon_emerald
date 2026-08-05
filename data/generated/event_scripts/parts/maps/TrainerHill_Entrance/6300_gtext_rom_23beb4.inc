	@ data/maps/TrainerHill_Entrance/scripts.inc:355 TrainerHill_Roof_Text_BuiltTrainerHillToFindPartner
	.globl gText_Rom_23BEB4
gText_Rom_23BEB4: @ 0x0823BEB4
	.string "このわたくしと タッグを くんでくれる\nパートナーを みつけるため\pこの トレーナーヒルを\nつくったんだぜい!"
	.byte EOS
	.if (. - gText_Rom_23BEB4) > 0x38
	.error "gText_Rom_23BEB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BEB4) < 0x38
	.space 0x38 - (. - gText_Rom_23BEB4)
	.endif
