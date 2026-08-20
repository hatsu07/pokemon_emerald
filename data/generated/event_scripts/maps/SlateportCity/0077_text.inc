	@ data/maps/SlateportCity/scripts.inc:1114 SlateportCity_Text_InterviewerSoCool
	.globl gText_Rom_1DD0C6
gText_Rom_1DD0C6: @ 0x081DD0C6
	.string "あの インタビュアーの おねえさん\nかっこよくて びじん!\pあたしも おおきく なったら\nこくさい ジャーナリストに なるわ!{EOS}"
	.if (. - gText_Rom_1DD0C6) > 0x40
	.error "gText_Rom_1DD0C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD0C6) < 0x40
	.space 0x40 - (. - gText_Rom_1DD0C6)
	.endif
