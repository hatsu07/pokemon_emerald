	@ pret/pokeemerald-jp direct xref for 0x084E5B40: event_object_movement.s: MovementType_FaceDownAndLeft_Step2, MovementType_FaceDownAndRight_Step2, MovementType_FaceDownLeftAndRight_Step2, MovementType_FaceDownUpAndLeft_Step2, MovementType_FaceDownUpAndRight_Step2 (+3 more)
	.globl gEventObjectMovementData_084E5B40
gEventObjectMovementData_084E5B40:
	@ analyzed canonical ROM range 0x084E5B40-0x084E5B47
sMovementDelayDurations_FaceDirectionPairs: @ 0x084E5B40
	.2byte 0x0020, 0x0030, 0x0040, 0x0050
	.4byte MovementType_WanderAround_Step0
	.4byte MovementType_WanderAround_Step1
	.4byte MovementType_WanderAround_Step2
	.4byte MovementType_WanderAround_Step3
	.4byte MovementType_WanderAround_Step4
	.4byte MovementType_WanderAround_Step5
	.4byte MovementType_WanderAround_Step6
	@ pret/pokeemerald-jp direct xref for 0x084E5B64: event_object_movement.s: MovementType_LookAround_Step4, MovementType_WalkSequenceDownUpLeftRight_Step1, MovementType_WanderAround_Step4
	.globl gEventObjectMovementData_084E5B64
gEventObjectMovementData_084E5B64:
	@ analyzed canonical ROM range 0x084E5B64-0x084E5B67
sMovementDirections_DownUpLeftRight: @ 0x084E5B64
	.byte 0x01, 0x02, 0x03, 0x04
	.4byte GetVectorDirection
	.4byte GetLimitedVectorDirection_SouthNorth
	.4byte GetLimitedVectorDirection_WestEast
	.4byte GetLimitedVectorDirection_WestNorth
	.4byte GetLimitedVectorDirection_EastNorth
	.4byte GetLimitedVectorDirection_WestSouth
	.4byte GetLimitedVectorDirection_EastSouth
	.4byte GetLimitedVectorDirection_SouthNorthWest
	.4byte GetLimitedVectorDirection_SouthNorthEast
	.4byte GetLimitedVectorDirection_NorthWestEast
	.4byte GetLimitedVectorDirection_SouthWestEast
	.4byte MovementType_LookAround_Step0
	.4byte MovementType_LookAround_Step1
	.4byte MovementType_LookAround_Step2
	.4byte MovementType_LookAround_Step3
	.4byte MovementType_LookAround_Step4
	.4byte MovementType_WanderUpAndDown_Step0
	.4byte MovementType_WanderUpAndDown_Step1
	.4byte MovementType_WanderUpAndDown_Step2
	.4byte MovementType_WanderUpAndDown_Step3
	.4byte MovementType_WanderUpAndDown_Step4
	.4byte MovementType_WanderUpAndDown_Step5
	.4byte MovementType_WanderUpAndDown_Step6
	@ pret/pokeemerald-jp direct xref for 0x084E5BC4: event_object_movement.s: MovementType_FaceDownAndUp_Step4, MovementType_WanderUpAndDown_Step4
	.globl gEventObjectMovementData_084E5BC4
gEventObjectMovementData_084E5BC4:
	@ analyzed canonical ROM range 0x084E5BC4-0x084E5BC7
sMovementDirections_DownUp: @ 0x084E5BC4
	.byte 0x01, 0x02, 0x00, 0x00
	.4byte MovementType_WanderLeftAndRight_Step0
	.4byte MovementType_WanderLeftAndRight_Step1
	.4byte MovementType_WanderLeftAndRight_Step2
	.4byte MovementType_WanderLeftAndRight_Step3
	.4byte MovementType_WanderLeftAndRight_Step4
	.4byte MovementType_WanderLeftAndRight_Step5
	.4byte MovementType_WanderLeftAndRight_Step6
	@ pret/pokeemerald-jp direct xref for 0x084E5BE4: event_object_movement.s: MovementType_FaceLeftAndRight_Step4, MovementType_WanderLeftAndRight_Step4
	.globl gEventObjectMovementData_084E5BE4
gEventObjectMovementData_084E5BE4:
	@ analyzed canonical ROM range 0x084E5BE4-0x084E5BE7
sMovementDirections_LeftRight: @ 0x084E5BE4
	.byte 0x03, 0x04, 0x00, 0x00
	.4byte MovementType_FaceDirection_Step0
	.4byte MovementType_FaceDirection_Step1
	.4byte MovementType_Invisible_Step2
	.4byte MovementType_BerryTreeGrowth_Step0
	.4byte MovementType_BerryTreeGrowth_Step1
	.4byte MovementType_BerryTreeGrowth_Step2
	.4byte MovementType_BerryTreeGrowth_Step3
	.4byte MovementType_BerryTreeGrowth_Step4
	.4byte MovementType_FaceDownAndUp_Step0
	.4byte MovementType_FaceDownAndUp_Step1
	.4byte MovementType_FaceDownAndUp_Step2
	.4byte MovementType_FaceDownAndUp_Step3
	.4byte MovementType_FaceDownAndUp_Step4
	.4byte MovementType_FaceLeftAndRight_Step0
	.4byte MovementType_FaceLeftAndRight_Step1
	.4byte MovementType_FaceLeftAndRight_Step2
	.4byte MovementType_FaceLeftAndRight_Step3
	.4byte MovementType_FaceLeftAndRight_Step4
	.4byte MovementType_FaceUpAndLeft_Step0
	.4byte MovementType_FaceUpAndLeft_Step1
	.4byte MovementType_FaceUpAndLeft_Step2
	.4byte MovementType_FaceUpAndLeft_Step3
	.4byte MovementType_FaceUpAndLeft_Step4
	@ pret/pokeemerald-jp direct xref for 0x084E5C44: event_object_movement.s: MovementType_FaceUpAndLeft_Step4
	.globl gEventObjectMovementData_084E5C44
gEventObjectMovementData_084E5C44:
	@ analyzed canonical ROM range 0x084E5C44-0x084E5C47
sMovementDirections_UpLeft: @ 0x084E5C44
	.byte 0x02, 0x03, 0x00, 0x00
	.4byte MovementType_FaceUpAndRight_Step0
	.4byte MovementType_FaceUpAndRight_Step1
	.4byte MovementType_FaceUpAndRight_Step2
	.4byte MovementType_FaceUpAndRight_Step3
	.4byte MovementType_FaceUpAndRight_Step4
	@ pret/pokeemerald-jp direct xref for 0x084E5C5C: event_object_movement.s: MovementType_FaceUpAndRight_Step4
	.globl gEventObjectMovementData_084E5C5C
gEventObjectMovementData_084E5C5C:
	@ analyzed canonical ROM range 0x084E5C5C-0x084E5C5F
sMovementDirections_UpRight: @ 0x084E5C5C
	.byte 0x02, 0x04, 0x00, 0x00
	.4byte MovementType_FaceDownAndLeft_Step0
	.4byte MovementType_FaceDownAndLeft_Step1
	.4byte MovementType_FaceDownAndLeft_Step2
	.4byte MovementType_FaceDownAndLeft_Step3
	.4byte MovementType_FaceDownAndLeft_Step4
	@ pret/pokeemerald-jp direct xref for 0x084E5C74: event_object_movement.s: MovementType_FaceDownAndLeft_Step4
	.globl gEventObjectMovementData_084E5C74
gEventObjectMovementData_084E5C74:
	@ analyzed canonical ROM range 0x084E5C74-0x084E5C77
sMovementDirections_DownLeft: @ 0x084E5C74
	.byte 0x01, 0x03, 0x00, 0x00
	.4byte MovementType_FaceDownAndRight_Step0
	.4byte MovementType_FaceDownAndRight_Step1
	.4byte MovementType_FaceDownAndRight_Step2
	.4byte MovementType_FaceDownAndRight_Step3
	.4byte MovementType_FaceDownAndRight_Step4
	@ pret/pokeemerald-jp direct xref for 0x084E5C8C: event_object_movement.s: MovementType_FaceDownAndRight_Step4
	.globl gEventObjectMovementData_084E5C8C
gEventObjectMovementData_084E5C8C:
	@ analyzed canonical ROM range 0x084E5C8C-0x084E5C8F
sMovementDirections_DownRight: @ 0x084E5C8C
	.byte 0x01, 0x04, 0x00, 0x00
	.4byte MovementType_FaceDownUpAndLeft_Step0
	.4byte MovementType_FaceDownUpAndLeft_Step1
	.4byte MovementType_FaceDownUpAndLeft_Step2
	.4byte MovementType_FaceDownUpAndLeft_Step3
	.4byte MovementType_FaceDownUpAndLeft_Step4
	@ pret/pokeemerald-jp direct xref for 0x084E5CA4: event_object_movement.s: MovementType_FaceDownUpAndLeft_Step4
	.globl gEventObjectMovementData_084E5CA4
gEventObjectMovementData_084E5CA4:
	@ analyzed canonical ROM range 0x084E5CA4-0x084E5CA7
sMovementDirections_DownUpLeft: @ 0x084E5CA4
	.byte 0x02, 0x01, 0x03, 0x01
	.4byte MovementType_FaceDownUpAndRight_Step0
	.4byte MovementType_FaceDownUpAndRight_Step1
	.4byte MovementType_FaceDownUpAndRight_Step2
	.4byte MovementType_FaceDownUpAndRight_Step3
	.4byte MovementType_FaceDownUpAndRight_Step4
	@ pret/pokeemerald-jp direct xref for 0x084E5CBC: event_object_movement.s: MovementType_FaceDownUpAndRight_Step4
	.globl gEventObjectMovementData_084E5CBC
gEventObjectMovementData_084E5CBC:
	@ analyzed canonical ROM range 0x084E5CBC-0x084E5CBF
sMovementDirections_DownUpRight: @ 0x084E5CBC
	.byte 0x01, 0x02, 0x04, 0x01
	.4byte MovementType_FaceUpLeftAndRight_Step0
	.4byte MovementType_FaceUpLeftAndRight_Step1
	.4byte MovementType_FaceUpLeftAndRight_Step2
	.4byte MovementType_FaceUpLeftAndRight_Step3
	.4byte MovementType_FaceUpLeftAndRight_Step4
	@ pret/pokeemerald-jp direct xref for 0x084E5CD4: event_object_movement.s: MovementType_FaceUpLeftAndRight_Step4
	.globl gEventObjectMovementData_084E5CD4
gEventObjectMovementData_084E5CD4:
	@ analyzed canonical ROM range 0x084E5CD4-0x084E5CD7
sMovementDirections_UpLeftRight: @ 0x084E5CD4
	.byte 0x02, 0x03, 0x04, 0x02
	.4byte MovementType_FaceDownLeftAndRight_Step0
	.4byte MovementType_FaceDownLeftAndRight_Step1
	.4byte MovementType_FaceDownLeftAndRight_Step2
	.4byte MovementType_FaceDownLeftAndRight_Step3
	.4byte MovementType_FaceDownLeftAndRight_Step4
	@ pret/pokeemerald-jp direct xref for 0x084E5CEC: event_object_movement.s: MovementType_FaceDownLeftAndRight_Step4
	.globl gEventObjectMovementData_084E5CEC
gEventObjectMovementData_084E5CEC:
	@ analyzed canonical ROM range 0x084E5CEC-0x084E5CEF
sMovementDirections_DownLeftRight: @ 0x084E5CEC
	.byte 0x03, 0x04, 0x01, 0x01
	.4byte MovementType_RotateCounterclockwise_Step0
	.4byte MovementType_RotateCounterclockwise_Step1
	.4byte MovementType_RotateCounterclockwise_Step2
	.4byte MovementType_RotateCounterclockwise_Step3
	@ pret/pokeemerald-jp direct xref for 0x084E5D00: event_object_movement.s: MovementType_RotateCounterclockwise_Step3
	.globl gEventObjectMovementData_084E5D00
gEventObjectMovementData_084E5D00:
	@ analyzed canonical ROM range 0x084E5D00-0x084E5D07
sMovementDirections_RotateCounterclockwise: @ 0x084E5D00
	.byte 0x01, 0x04, 0x03, 0x01, 0x02, 0x00, 0x00, 0x00
	.4byte MovementType_RotateClockwise_Step0
	.4byte MovementType_RotateClockwise_Step1
	.4byte MovementType_RotateClockwise_Step2
	.4byte MovementType_RotateClockwise_Step3
	@ pret/pokeemerald-jp direct xref for 0x084E5D18: event_object_movement.s: MovementType_RotateClockwise_Step3
	.globl gEventObjectMovementData_084E5D18
gEventObjectMovementData_084E5D18:
	@ analyzed canonical ROM range 0x084E5D18-0x084E5D1F
sMovementDirections_RotateClockwise: @ 0x084E5D18
	.byte 0x01, 0x03, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00
	.4byte MovementType_WalkBackAndForth_Step0
	.4byte MovementType_WalkBackAndForth_Step1
	.4byte MovementType_WalkBackAndForth_Step2
	.4byte MovementType_WalkBackAndForth_Step3
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceUpRightLeftDown_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5D3C: event_object_movement.s: MovementType_WalkSequenceUpRightLeftDown_Step1
	.globl gEventObjectMovementData_084E5D3C
gEventObjectMovementData_084E5D3C:
	@ analyzed canonical ROM range 0x084E5D3C-0x084E5D3F
sMovementDirections_WalkSequenceUpRightLeftDown: @ 0x084E5D3C
	.byte 0x02, 0x04, 0x03, 0x01
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceRightLeftDownUp_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5D4C: event_object_movement.s: MovementType_WalkSequenceRightLeftDownUp_Step1
	.globl gEventObjectMovementData_084E5D4C
gEventObjectMovementData_084E5D4C:
	@ analyzed canonical ROM range 0x084E5D4C-0x084E5D4F
sMovementDirections_WalkSequenceRightLeftDownUp: @ 0x084E5D4C
	.byte 0x04, 0x03, 0x01, 0x02
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceDownUpRightLeft_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5D5C: event_object_movement.s: MovementType_WalkSequenceDownUpRightLeft_Step1
	.globl gEventObjectMovementData_084E5D5C
gEventObjectMovementData_084E5D5C:
	@ analyzed canonical ROM range 0x084E5D5C-0x084E5D5F
sMovementDirections_WalkSequenceDownUpRightLeft: @ 0x084E5D5C
	.byte 0x01, 0x02, 0x04, 0x03
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceLeftDownUpRight_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5D6C: event_object_movement.s: MovementType_WalkSequenceLeftDownUpRight_Step1
	.globl gEventObjectMovementData_084E5D6C
gEventObjectMovementData_084E5D6C:
	@ analyzed canonical ROM range 0x084E5D6C-0x084E5D6F
sMovementDirections_WalkSequenceLeftDownUpRight: @ 0x084E5D6C
	.byte 0x03, 0x01, 0x02, 0x04
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceUpLeftRightDown_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5D7C: event_object_movement.s: MovementType_WalkSequenceUpLeftRightDown_Step1
	.globl gEventObjectMovementData_084E5D7C
gEventObjectMovementData_084E5D7C:
	@ analyzed canonical ROM range 0x084E5D7C-0x084E5D7F
sMovementDirections_WalkSequenceUpLeftRightDown: @ 0x084E5D7C
	.byte 0x02, 0x03, 0x04, 0x01
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceLeftRightDownUp_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5D8C: event_object_movement.s: MovementType_WalkSequenceLeftRightDownUp_Step1
	.globl gEventObjectMovementData_084E5D8C
gEventObjectMovementData_084E5D8C:
	@ analyzed canonical ROM range 0x084E5D8C-0x084E5D8F
sMovementDirections_WalkSequenceLeftRightDownUp: @ 0x084E5D8C
	.byte 0x03, 0x04, 0x01, 0x02
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceDownUpLeftRight_Step1
	.4byte MovementType_WalkSequence_Step2
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceRightDownUpLeft_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5DA8: event_object_movement.s: MovementType_WalkSequenceRightDownUpLeft_Step1
	.globl gEventObjectMovementData_084E5DA8
gEventObjectMovementData_084E5DA8:
	@ analyzed canonical ROM range 0x084E5DA8-0x084E5DAB
sMovementDirections_WalkSequenceRightDownUpLeft: @ 0x084E5DA8
	.byte 0x04, 0x01, 0x02, 0x03
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceLeftUpDownRight_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5DB8: event_object_movement.s: MovementType_WalkSequenceLeftUpDownRight_Step1
	.globl gEventObjectMovementData_084E5DB8
gEventObjectMovementData_084E5DB8:
	@ analyzed canonical ROM range 0x084E5DB8-0x084E5DBB
sMovementDirections_WalkSequenceLeftUpDownRight: @ 0x084E5DB8
	.byte 0x03, 0x02, 0x01, 0x04
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceUpDownRightLeft_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5DC8: event_object_movement.s: MovementType_WalkSequenceUpDownRightLeft_Step1
	.globl gEventObjectMovementData_084E5DC8
gEventObjectMovementData_084E5DC8:
	@ analyzed canonical ROM range 0x084E5DC8-0x084E5DCB
sMovementDirections_WalkSequenceUpDownRightLeft: @ 0x084E5DC8
	.byte 0x02, 0x01, 0x04, 0x03
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceRightLeftUpDown_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5DD8: event_object_movement.s: MovementType_WalkSequenceRightLeftUpDown_Step1
	.globl gEventObjectMovementData_084E5DD8
gEventObjectMovementData_084E5DD8:
	@ analyzed canonical ROM range 0x084E5DD8-0x084E5DDB
sMovementDirections_WalkSequenceRightLeftUpDown: @ 0x084E5DD8
	.byte 0x04, 0x03, 0x02, 0x01
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceDownRightLeftUp_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5DE8: event_object_movement.s: MovementType_WalkSequenceDownRightLeftUp_Step1
	.globl gEventObjectMovementData_084E5DE8
gEventObjectMovementData_084E5DE8:
	@ analyzed canonical ROM range 0x084E5DE8-0x084E5DEB
sMovementDirections_WalkSequenceDownRightLeftUp: @ 0x084E5DE8
	.byte 0x01, 0x04, 0x03, 0x02
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceRightUpDownLeft_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5DF8: event_object_movement.s: MovementType_WalkSequenceRightUpDownLeft_Step1
	.globl gEventObjectMovementData_084E5DF8
gEventObjectMovementData_084E5DF8:
	@ analyzed canonical ROM range 0x084E5DF8-0x084E5DFB
sMovementDirections_WalkSequenceRightUpDownLeft: @ 0x084E5DF8
	.byte 0x04, 0x02, 0x01, 0x03
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceUpDownLeftRight_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5E08: event_object_movement.s: MovementType_WalkSequenceUpDownLeftRight_Step1
	.globl gEventObjectMovementData_084E5E08
gEventObjectMovementData_084E5E08:
	@ analyzed canonical ROM range 0x084E5E08-0x084E5E0B
sMovementDirections_WalkSequenceUpDownLeftRight: @ 0x084E5E08
	.byte 0x02, 0x01, 0x03, 0x04
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceLeftRightUpDown_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5E18: event_object_movement.s: MovementType_WalkSequenceLeftRightUpDown_Step1
	.globl gEventObjectMovementData_084E5E18
gEventObjectMovementData_084E5E18:
	@ analyzed canonical ROM range 0x084E5E18-0x084E5E1B
sMovementDirections_WalkSequenceLeftRightUpDown: @ 0x084E5E18
	.byte 0x03, 0x04, 0x02, 0x01
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceDownLeftRightUp_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5E28: event_object_movement.s: MovementType_WalkSequenceDownLeftRightUp_Step1
	.globl gEventObjectMovementData_084E5E28
gEventObjectMovementData_084E5E28:
	@ analyzed canonical ROM range 0x084E5E28-0x084E5E2B
sMovementDirections_WalkSequenceDownLeftRightUp: @ 0x084E5E28
	.byte 0x01, 0x03, 0x04, 0x02
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceUpLeftDownRight_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5E38: event_object_movement.s: MovementType_WalkSequenceUpLeftDownRight_Step1
	.globl gEventObjectMovementData_084E5E38
gEventObjectMovementData_084E5E38:
	@ analyzed canonical ROM range 0x084E5E38-0x084E5E3B
sMovementDirections_WalkSequenceUpLeftDownRight: @ 0x084E5E38
	.byte 0x02, 0x03, 0x01, 0x04
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceDownRightUpLeft_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5E48: event_object_movement.s: MovementType_WalkSequenceDownRightUpLeft_Step1
	.globl gEventObjectMovementData_084E5E48
gEventObjectMovementData_084E5E48:
	@ analyzed canonical ROM range 0x084E5E48-0x084E5E4B
sMovementDirections_WalkSequenceDownRightUpLeft: @ 0x084E5E48
	.byte 0x01, 0x04, 0x02, 0x03
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceLeftDownRightUp_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5E58: event_object_movement.s: MovementType_WalkSequenceLeftDownRightUp_Step1
	.globl gEventObjectMovementData_084E5E58
gEventObjectMovementData_084E5E58:
	@ analyzed canonical ROM range 0x084E5E58-0x084E5E5B
sMovementDirections_WalkSequenceLeftDownRightUp: @ 0x084E5E58
	.byte 0x03, 0x01, 0x04, 0x02
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceRightUpLeftDown_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5E68: event_object_movement.s: MovementType_WalkSequenceRightUpLeftDown_Step1
	.globl gEventObjectMovementData_084E5E68
gEventObjectMovementData_084E5E68:
	@ analyzed canonical ROM range 0x084E5E68-0x084E5E6B
sMovementDirections_WalkSequenceRightUpLeftDown: @ 0x084E5E68
	.byte 0x04, 0x02, 0x03, 0x01
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceUpRightDownLeft_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5E78: event_object_movement.s: MovementType_WalkSequenceUpRightDownLeft_Step1
	.globl gEventObjectMovementData_084E5E78
gEventObjectMovementData_084E5E78:
	@ analyzed canonical ROM range 0x084E5E78-0x084E5E7B
sMovementDirections_WalkSequenceUpRightDownLeft: @ 0x084E5E78
	.byte 0x02, 0x04, 0x01, 0x03
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceDownLeftUpRight_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5E88: event_object_movement.s: MovementType_WalkSequenceDownLeftUpRight_Step1
	.globl gEventObjectMovementData_084E5E88
gEventObjectMovementData_084E5E88:
	@ analyzed canonical ROM range 0x084E5E88-0x084E5E8B
sMovementDirections_WalkSequenceDownLeftUpRight: @ 0x084E5E88
	.byte 0x01, 0x03, 0x02, 0x04
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceLeftUpRightDown_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5E98: event_object_movement.s: MovementType_WalkSequenceLeftUpRightDown_Step1
	.globl gEventObjectMovementData_084E5E98
gEventObjectMovementData_084E5E98:
	@ analyzed canonical ROM range 0x084E5E98-0x084E5E9B
sMovementDirections_WalkSequenceLeftUpRightDown: @ 0x084E5E98
	.byte 0x03, 0x02, 0x04, 0x01
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceRightDownLeftUp_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5EA8: event_object_movement.s: MovementType_WalkSequenceRightDownLeftUp_Step1
	.globl gEventObjectMovementData_084E5EA8
gEventObjectMovementData_084E5EA8:
	@ analyzed canonical ROM range 0x084E5EA8-0x084E5EAB
sMovementDirections_WalkSequenceRightDownLeftUp: @ 0x084E5EA8
	.byte 0x04, 0x01, 0x03, 0x02
	.4byte MovementType_CopyPlayer_Step0
	.4byte MovementType_CopyPlayer_Step1
	.4byte MovementType_CopyPlayer_Step2
	.4byte CopyablePlayerMovement_None
	.4byte CopyablePlayerMovement_FaceDirection
	.4byte CopyablePlayerMovement_GoSpeed0
	.4byte CopyablePlayerMovement_GoSpeed1
	.4byte CopyablePlayerMovement_GoSpeed2
	.4byte CopyablePlayerMovement_Slide
	.4byte cph_IM_DIFFERENT
	.4byte CopyablePlayerMovement_GoSpeed4
	.4byte CopyablePlayerMovement_Jump
	.4byte CopyablePlayerMovement_None
	.4byte CopyablePlayerMovement_None
	.4byte MovementType_CopyPlayer_Step0
	.4byte MovementType_CopyPlayerInGrass_Step1
	.4byte MovementType_CopyPlayer_Step2
	.4byte MovementType_Hidden_Step0
	.4byte MovementType_WalkInPlace_Step0
	.4byte MovementType_MoveInPlace_Step1
	.4byte MovementType_WalkSlowlyInPlace_Step0
	.4byte MovementType_MoveInPlace_Step1
	.4byte MovementType_JogInPlace_Step0
	.4byte MovementType_MoveInPlace_Step1
	.4byte MovementType_RunInPlace_Step0
	.4byte MovementType_MoveInPlace_Step1
	.4byte MovementType_Invisible_Step0
	.4byte MovementType_Invisible_Step1
	.4byte MovementType_FaceDirection_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5F20: event_object_movement.s: GetJumpInPlaceMovementAction
	.globl gEventObjectMovementData_084E5F20
gEventObjectMovementData_084E5F20:
gJumpInPlaceMovementActionsByDirection: @ 0x084E5F20
	@ Indexed by direction id 0-8.
	.byte 0x00, 0x00, 0x01, 0x02, 0x03, 0x00, 0x00, 0x01, 0x01
	@ pret/pokeemerald-jp direct xref for 0x084E5F29: event_object_movement.s: GetJumpInPlaceTurnAroundMovementAction
	.globl gEventObjectMovementData_084E5F29
gEventObjectMovementData_084E5F29:
gJumpInPlaceTurnAroundMovementActionsByDirection: @ 0x084E5F29
	@ Indexed by direction id 0-8.
	.byte 0x04, 0x04, 0x05, 0x06, 0x07, 0x04, 0x04, 0x05, 0x05
	@ pret/pokeemerald-jp direct xref for 0x084E5F32: event_object_movement.s: GetJumpMovementAction
	.globl gEventObjectMovementData_084E5F32
gEventObjectMovementData_084E5F32:
gJumpMovementActionsByDirection: @ 0x084E5F32
	@ Indexed by direction id 0-8.
	.byte 0x08, 0x08, 0x09, 0x0A, 0x0B, 0x08, 0x08, 0x09, 0x09
	@ pret/pokeemerald-jp direct xref for 0x084E5F3B: event_object_movement.s: GetJumpSpecialMovementAction
	.globl gEventObjectMovementData_084E5F3B
gEventObjectMovementData_084E5F3B:
gJumpSpecialMovementActionsByDirection: @ 0x084E5F3B
	@ Indexed by direction id 0-8.
	.byte 0x0C, 0x0C, 0x0D, 0x0E, 0x0F, 0x0C, 0x0C, 0x0D, 0x0D
	@ pret/pokeemerald-jp direct xref for 0x084E5F44: event_object_movement.s: GetPlayerRunMovementAction
	.globl gEventObjectMovementData_084E5F44
gEventObjectMovementData_084E5F44:
gPlayerRunMovementActionsByDirection: @ 0x084E5F44
	@ Indexed by direction id 0-8.
	.byte 0x10, 0x10, 0x11, 0x12, 0x13, 0x10, 0x10, 0x11, 0x11
	@ pret/pokeemerald-jp direct xref for 0x084E5F4D: event_object_movement.s: GetRideWaterCurrentMovementAction
	.globl gEventObjectMovementData_084E5F4D
gEventObjectMovementData_084E5F4D:
gRideWaterCurrentMovementActionsByDirection: @ 0x084E5F4D
	@ Indexed by direction id 0-8.
	.byte 0x14, 0x14, 0x15, 0x16, 0x17, 0x14, 0x14, 0x15, 0x15
	@ pret/pokeemerald-jp direct xref for 0x084E5F56: event_object_movement.s: GetSlideMovementAction
	.globl gEventObjectMovementData_084E5F56
gEventObjectMovementData_084E5F56:
gSlideMovementActionsByDirection: @ 0x084E5F56
	@ Indexed by direction id 0-8.
	.byte 0x14, 0x14, 0x15, 0x16, 0x17, 0x14, 0x14, 0x15, 0x15
	@ pret/pokeemerald-jp direct xref for 0x084E5F5F: event_object_movement.s: GetWalkFastMovementAction
	.globl gEventObjectMovementData_084E5F5F
gEventObjectMovementData_084E5F5F:
gWalkFastMovementActionsByDirection: @ 0x084E5F5F
	@ Indexed by direction id 0-8.
	.byte 0x18, 0x18, 0x19, 0x1A, 0x1B, 0x18, 0x18, 0x19, 0x19
	@ pret/pokeemerald-jp direct xref for 0x084E5F68: event_object_movement.s: GetWalkFastestMovementAction
	.globl gEventObjectMovementData_084E5F68
gEventObjectMovementData_084E5F68:
gWalkFastestMovementActionsByDirection: @ 0x084E5F68
	@ Indexed by direction id 0-8.
	.byte 0x1C, 0x1C, 0x1D, 0x1E, 0x1F, 0x1C, 0x1C, 0x1D, 0x1D
	@ pret/pokeemerald-jp direct xref for 0x084E5F71: event_object_movement.s: GetWalkInPlaceFastMovementAction
	.globl gEventObjectMovementData_084E5F71
gEventObjectMovementData_084E5F71:
gWalkInPlaceFastMovementActionsByDirection: @ 0x084E5F71
	@ Indexed by direction id 0-8.
	.byte 0x20, 0x20, 0x21, 0x22, 0x23, 0x20, 0x20, 0x21, 0x21
	@ pret/pokeemerald-jp direct xref for 0x084E5F7A: event_object_movement.s: GetWalkInPlaceFastestMovementAction
	.globl gEventObjectMovementData_084E5F7A
gEventObjectMovementData_084E5F7A:
gWalkInPlaceFastestMovementActionsByDirection: @ 0x084E5F7A
	@ Indexed by direction id 0-8.
	.byte 0x24, 0x24, 0x25, 0x26, 0x27, 0x24, 0x24, 0x25, 0x25
	@ pret/pokeemerald-jp direct xref for 0x084E5F83: event_object_movement.s: GetWalkInPlaceNormalMovementAction
	.globl gEventObjectMovementData_084E5F83
gEventObjectMovementData_084E5F83:
gWalkInPlaceNormalMovementActionsByDirection: @ 0x084E5F83
	@ Indexed by direction id 0-8.
	.byte 0x00, 0x00, 0x01, 0x02, 0x03, 0x00, 0x00, 0x01, 0x01
	@ pret/pokeemerald-jp direct xref for 0x084E5F8C: event_object_movement.s: GetWalkInPlaceSlowMovementAction
	.globl gEventObjectMovementData_084E5F8C
gEventObjectMovementData_084E5F8C:
gWalkInPlaceSlowMovementActionsByDirection: @ 0x084E5F8C
	@ Indexed by direction id 0-8.
	.byte 0x04, 0x04, 0x05, 0x06, 0x07, 0x04, 0x04, 0x05, 0x05
	@ pret/pokeemerald-jp direct xref for 0x084E5F95: event_object_movement.s: GetWalkNormalMovementAction
	.globl gEventObjectMovementData_084E5F95
gEventObjectMovementData_084E5F95:
gWalkNormalMovementActionsByDirection: @ 0x084E5F95
	@ Indexed by direction id 0-8.
	.byte 0x08, 0x08, 0x09, 0x0A, 0x0B, 0x08, 0x08, 0x09, 0x09
	@ pret/pokeemerald-jp direct xref for 0x084E5F9E: event_object_movement.s: GetWalkSlowMovementAction
	.globl gEventObjectMovementData_084E5F9E
gEventObjectMovementData_084E5F9E:
gWalkSlowMovementActionsByDirection: @ 0x084E5F9E
	@ Indexed by direction id 0-8.
	.byte 0x14, 0x14, 0x15, 0x16, 0x17, 0x14, 0x14, 0x15, 0x15
	@ pret/pokeemerald-jp direct xref for 0x084E5FA7: event_object_movement.s: GroundEffect_DeepSandTracks
	.globl gEventObjectMovementData_084E5FA7
gEventObjectMovementData_084E5FA7:
gDeepSandTracksSpriteAnimByDirection: @ 0x084E5FA7
	@ Indexed by direction id 0-8.
	.byte 0x08, 0x08, 0x07, 0x09, 0x0A, 0x08, 0x08, 0x07, 0x07
	.4byte MetatileBehavior_IsSouthBlocked
	.4byte MetatileBehavior_IsNorthBlocked
	.4byte MetatileBehavior_IsWestBlocked
	.4byte MetatileBehavior_IsEastBlocked
	.4byte MetatileBehavior_IsNorthBlocked
	.4byte MetatileBehavior_IsSouthBlocked
	.4byte MetatileBehavior_IsEastBlocked
	.4byte MetatileBehavior_IsWestBlocked
	@ pret/pokeemerald-jp direct xref for 0x084E5FD0: event_object_movement.s: MoveCoords, MoveCoordsInDirection, Step1, Step2, Step3 (+3 more)
	.globl gEventObjectMovementData_084E5FD0
gEventObjectMovementData_084E5FD0:
gMoveCoordOffsetsByDirection: @ 0x084E5FD0
	@ Indexed by direction id 0-8 as signed x, y pairs.
	.2byte  0,  0
	.2byte  0,  1
	.2byte  0, -1
	.2byte -1,  0
	.2byte  1,  0
	.2byte -1,  1
	.2byte  1,  1
	.2byte -1, -1
	.2byte  1, -1
	@ pret/pokeemerald-jp direct xref for 0x084E5FF4: event_object_movement.s: sub_08092CA0
	.globl gEventObjectMovementData_084E5FF4
gEventObjectMovementData_084E5FF4:
gFaceDirectionMovementActions: @ 0x084E5FF4
	@ Indexed by direction id 0-4.
	.byte 0x00, 0x00, 0x01, 0x02, 0x03
	@ pret/pokeemerald-jp direct xref for 0x084E5FF9: event_object_movement.s: sub_08092CCC
	.globl gEventObjectMovementData_084E5FF9
gEventObjectMovementData_084E5FF9:
gFaceDirectionFastMovementActions: @ 0x084E5FF9
	@ Indexed by direction id 0-4.
	.byte 0x04, 0x04, 0x05, 0x06, 0x07
	@ pret/pokeemerald-jp direct xref for 0x084E5FFE: event_object_movement.s: sub_08092CF8
	.globl gEventObjectMovementData_084E5FFE
gEventObjectMovementData_084E5FFE:
gWalkNormalMovementActions: @ 0x084E5FFE
	@ Indexed by direction id 0-4.
	.byte 0x08, 0x08, 0x09, 0x0A, 0x0B
	@ pret/pokeemerald-jp direct xref for 0x084E6003: event_object_movement.s: sub_08092D24
	.globl gEventObjectMovementData_084E6003
gEventObjectMovementData_084E6003:
gRideWaterCurrentMovementActions: @ 0x084E6003
	@ Indexed by direction id 0-4.
	.byte 0x15, 0x15, 0x16, 0x17, 0x18
	@ pret/pokeemerald-jp direct xref for 0x084E6008: event_object_movement.s: sub_08092D50
	.globl gEventObjectMovementData_084E6008
gEventObjectMovementData_084E6008:
gWalkInPlaceNormalMovementActions: @ 0x084E6008
	@ Indexed by direction id 0-4.
	.byte 0x29, 0x29, 0x2A, 0x2B, 0x2C
	@ pret/pokeemerald-jp direct xref for 0x084E600D: event_object_movement.s: sub_08092D7C
	.globl gEventObjectMovementData_084E600D
gEventObjectMovementData_084E600D:
gWalkInPlaceFastMovementActions: @ 0x084E600D
	@ Indexed by direction id 0-4.
	.byte 0x2D, 0x2D, 0x2E, 0x2F, 0x30
	@ pret/pokeemerald-jp direct xref for 0x084E6012: event_object_movement.s: sub_08092DA8
	.globl gEventObjectMovementData_084E6012
gEventObjectMovementData_084E6012:
gWalkInPlaceFasterMovementActions: @ 0x084E6012
	@ Indexed by direction id 0-4.
	.byte 0x31, 0x31, 0x32, 0x33, 0x34
	@ pret/pokeemerald-jp direct xref for 0x084E6017: event_object_movement.s: sub_08092DD4
	.globl gEventObjectMovementData_084E6017
gEventObjectMovementData_084E6017:
gWalkInPlaceFastestMovementActions: @ 0x084E6017
	@ Indexed by direction id 0-4.
	.byte 0x35, 0x35, 0x36, 0x37, 0x38
	@ pret/pokeemerald-jp direct xref for 0x084E601C: event_object_movement.s: sub_08092E00
	.globl gEventObjectMovementData_084E601C
gEventObjectMovementData_084E601C:
gJumpSpecialMovementActions: @ 0x084E601C
	@ Indexed by direction id 0-4.
	.byte 0x0C, 0x0C, 0x0D, 0x0E, 0x0F
	@ pret/pokeemerald-jp direct xref for 0x084E6021: event_object_movement.s: sub_08092E2C
	.globl gEventObjectMovementData_084E6021
gEventObjectMovementData_084E6021:
gPlayerRunMovementActions: @ 0x084E6021
	@ Indexed by direction id 0-4.
	.byte 0x46, 0x46, 0x47, 0x48, 0x49
	@ pret/pokeemerald-jp direct xref for 0x084E6026: event_object_movement.s: sub_08092E58
	.globl gEventObjectMovementData_084E6026
gEventObjectMovementData_084E6026:
gPlayerRunSlowMovementActions: @ 0x084E6026
	@ Indexed by direction id 0-4.
	.byte 0x4B, 0x4B, 0x4A, 0x4D, 0x4C
	@ pret/pokeemerald-jp direct xref for 0x084E602B: event_object_movement.s: sub_08092E84
	.globl gEventObjectMovementData_084E602B
gEventObjectMovementData_084E602B:
gWalkFastMovementActions: @ 0x084E602B
	@ Indexed by direction id 0-4.
	.byte 0x42, 0x42, 0x43, 0x44, 0x45
	@ pret/pokeemerald-jp direct xref for 0x084E6030: event_object_movement.s: sub_08092EB0
	.globl gEventObjectMovementData_084E6030
gEventObjectMovementData_084E6030:
gWalkSlowMovementActions: @ 0x084E6030
	@ Indexed by direction id 0-4.
	.byte 0x3A, 0x3A, 0x3B, 0x3C, 0x3D
	@ pret/pokeemerald-jp direct xref for 0x084E6035: event_object_movement.s: sub_08092EDC
	.globl gEventObjectMovementData_084E6035
gEventObjectMovementData_084E6035:
gWalkFastestMovementActions: @ 0x084E6035
	@ Indexed by direction id 0-4.
	.byte 0x19, 0x19, 0x1A, 0x1B, 0x1C
	@ pret/pokeemerald-jp direct xref for 0x084E603A: event_object_movement.s: sub_08092F08
	.globl gEventObjectMovementData_084E603A
gEventObjectMovementData_084E603A:
gSlideMovementActions: @ 0x084E603A
	@ Indexed by direction id 0-4.
	.byte 0x1D, 0x1D, 0x1E, 0x1F, 0x20
	@ pret/pokeemerald-jp direct xref for 0x084E603F: event_object_movement.s: sub_08092F34
	.globl gEventObjectMovementData_084E603F
gEventObjectMovementData_084E603F:
gPlayerJumpMovementActions: @ 0x084E603F
	@ Indexed by direction id 0-4.
	.byte 0x21, 0x21, 0x22, 0x23, 0x24
	@ pret/pokeemerald-jp direct xref for 0x084E6044: event_object_movement.s: sub_08092F60
	.globl gEventObjectMovementData_084E6044
gEventObjectMovementData_084E6044:
gJumpInPlaceFastMovementActions: @ 0x084E6044
	@ Indexed by direction id 0-4.
	.byte 0x25, 0x25, 0x26, 0x27, 0x28
	@ pret/pokeemerald-jp direct xref for 0x084E6049: event_object_movement.s: sub_08092FB8
	.globl gEventObjectMovementData_084E6049
gEventObjectMovementData_084E6049:
gAcroWheelieFaceDirectionMovementActions: @ 0x084E6049
	@ Indexed by direction id 0-4.
	.byte 0x64, 0x64, 0x65, 0x66, 0x67
	@ pret/pokeemerald-jp direct xref for 0x084E604E: event_object_movement.s: sub_08092FE4
	.globl gEventObjectMovementData_084E604E
gEventObjectMovementData_084E604E:
gAcroWheelieMoveDirectionMovementActions: @ 0x084E604E
	@ Indexed by direction id 0-4.
	.byte 0x68, 0x68, 0x69, 0x6A, 0x6B
	@ pret/pokeemerald-jp direct xref for 0x084E6053: event_object_movement.s: EventObjectExecSingleMovementAction
	.globl gEventObjectMovementData_084E6053
gEventObjectMovementData_084E6053:
gSingleMovementActionsByDirection: @ 0x084E6053
	@ Indexed by direction id 0-4.
	.byte 0x6C, 0x6C, 0x6D, 0x6E, 0x6F
	@ pret/pokeemerald-jp direct xref for 0x084E6058: event_object_movement.s: sub_0809303C
	.globl gEventObjectMovementData_084E6058
gEventObjectMovementData_084E6058:
gAcroEndWheelieFaceDirectionMovementActions: @ 0x084E6058
	@ Indexed by direction id 0-4.
	.byte 0x70, 0x70, 0x71, 0x72, 0x73
	@ pret/pokeemerald-jp direct xref for 0x084E605D: event_object_movement.s: GetAcroEndWheelieFaceDirectionMovementAction
	.globl gEventObjectMovementData_084E605D
gEventObjectMovementData_084E605D:
gAcroEndWheelieFaceDirectionMovementActions2: @ 0x084E605D
	@ Indexed by direction id 0-4.
	.byte 0x74, 0x74, 0x75, 0x76, 0x77
	@ pret/pokeemerald-jp direct xref for 0x084E6062: event_object_movement.s: sub_08093094
	.globl gEventObjectMovementData_084E6062
gEventObjectMovementData_084E6062:
gAcroWheelieHopFaceDirectionMovementActions: @ 0x084E6062
	@ Indexed by direction id 0-4.
	.byte 0x78, 0x78, 0x79, 0x7A, 0x7B
	@ pret/pokeemerald-jp direct xref for 0x084E6067: event_object_movement.s: sub_080930C0
	.globl gEventObjectMovementData_084E6067
gEventObjectMovementData_084E6067:
gAcroWheelieHopDirectionMovementActions: @ 0x084E6067
	@ Indexed by direction id 0-4.
	.byte 0x7C, 0x7C, 0x7D, 0x7E, 0x7F
	@ pret/pokeemerald-jp direct xref for 0x084E606C: event_object_movement.s: sub_080930EC
	.globl gEventObjectMovementData_084E606C
gEventObjectMovementData_084E606C:
gAcroWheelieJumpDirectionMovementActions: @ 0x084E606C
	@ Indexed by direction id 0-4.
	.byte 0x80, 0x80, 0x81, 0x82, 0x83
	@ pret/pokeemerald-jp direct xref for 0x084E6071: event_object_movement.s: sub_08093118
	.globl gEventObjectMovementData_084E6071
gEventObjectMovementData_084E6071:
gAcroWheelieInPlaceDirectionMovementActions: @ 0x084E6071
	@ Indexed by direction id 0-4.
	.byte 0x84, 0x84, 0x85, 0x86, 0x87
	@ pret/pokeemerald-jp direct xref for 0x084E6076: event_object_movement.s: sub_08093144
	.globl gEventObjectMovementData_084E6076
gEventObjectMovementData_084E6076:
gAcroPopWheelieMoveDirectionMovementActions: @ 0x084E6076
	@ Indexed by direction id 0-4.
	.byte 0x88, 0x88, 0x89, 0x8A, 0x8B
	@ pret/pokeemerald-jp direct xref for 0x084E607B: event_object_movement.s: GetOppositeDirection
	.globl gEventObjectMovementData_084E607B
gEventObjectMovementData_084E607B:
gOppositeDirections: @ 0x084E607B
	@ Indexed by direction id - 1 for direction ids 1-8.
	.byte 0x02, 0x01, 0x04, 0x03, 0x08, 0x07, 0x06, 0x05
	@ pret/pokeemerald-jp direct xref for 0x084E6083: event_object_movement.s: zffu_offset_calc
	.globl gEventObjectMovementData_084E6083
gEventObjectMovementData_084E6083:
gFacingDirectionPairOffsets: @ 0x084E6083
	.byte 0x02, 0x01, 0x04, 0x03
	.byte 0x01, 0x02, 0x03, 0x04
	.byte 0x03, 0x04, 0x02, 0x01
	.byte 0x04, 0x03, 0x01, 0x02
	@ pret/pokeemerald-jp direct xref for 0x084E6093: event_object_movement.s: state_to_direction
	.globl gEventObjectMovementData_084E6093
gEventObjectMovementData_084E6093:
gStateToDirectionTable: @ 0x084E6093
	.byte 0x02, 0x01, 0x04, 0x03, 0x01, 0x02, 0x03, 0x04, 0x04, 0x03, 0x01, 0x02, 0x03, 0x04, 0x02, 0x01
	.byte 0x00
	@ pret/pokeemerald-jp direct xref for 0x084E60A4: event_object_movement.s: sub_0809321C, sub_08093258
	.globl gEventObjectMovementData_084E60A4
gEventObjectMovementData_084E60A4:
	@ confirmed contiguous ROM pointer table: 158 entries from this address
gMovementActionFuncTablePointers: @ 0x084E60A4
	@ 158-entry movement action dispatch table used by EventObjectExecHeldMovementAction.
	.4byte sMovementActionFuncs_FaceDown @ movement action 0
	.4byte sMovementActionFuncs_FaceUp @ movement action 1
	.4byte sMovementActionFuncs_FaceLeft @ movement action 2
	.4byte sMovementActionFuncs_FaceRight @ movement action 3
	.4byte sMovementActionFuncs_WalkSlowDown @ movement action 4
	.4byte sMovementActionFuncs_WalkSlowUp @ movement action 5
	.4byte sMovementActionFuncs_WalkSlowLeft @ movement action 6
	.4byte sMovementActionFuncs_WalkSlowRight @ movement action 7
	.4byte sMovementActionFuncs_WalkNormalDown @ movement action 8
	.4byte sMovementActionFuncs_WalkNormalUp @ movement action 9
	.4byte sMovementActionFuncs_WalkNormalLeft @ movement action 10
	.4byte sMovementActionFuncs_WalkNormalRight @ movement action 11
	.4byte sMovementActionFuncs_Jump2Down @ movement action 12
	.4byte sMovementActionFuncs_Jump2Up @ movement action 13
	.4byte sMovementActionFuncs_Jump2Left @ movement action 14
	.4byte sMovementActionFuncs_Jump2Right @ movement action 15
	.4byte sMovementActionFuncs_Delay1 @ movement action 16
	.4byte sMovementActionFuncs_Delay2 @ movement action 17
	.4byte sMovementActionFuncs_Delay4 @ movement action 18
	.4byte sMovementActionFuncs_Delay8 @ movement action 19
	.4byte sMovementActionFuncs_Delay16 @ movement action 20
	.4byte sMovementActionFuncs_WalkFastDown @ movement action 21
	.4byte sMovementActionFuncs_WalkFastUp @ movement action 22
	.4byte sMovementActionFuncs_WalkFastLeft @ movement action 23
	.4byte sMovementActionFuncs_WalkFastRight @ movement action 24
	.4byte sMovementActionFuncs_WalkInPlaceSlowDown @ movement action 25
	.4byte sMovementActionFuncs_WalkInPlaceSlowUp @ movement action 26
	.4byte sMovementActionFuncs_WalkInPlaceSlowLeft @ movement action 27
	.4byte sMovementActionFuncs_WalkInPlaceSlowRight @ movement action 28
	.4byte sMovementActionFuncs_WalkInPlaceNormalDown @ movement action 29
	.4byte sMovementActionFuncs_WalkInPlaceNormalUp @ movement action 30
	.4byte sMovementActionFuncs_WalkInPlaceNormalLeft @ movement action 31
	.4byte sMovementActionFuncs_WalkInPlaceNormalRight @ movement action 32
	.4byte sMovementActionFuncs_WalkInPlaceFastDown @ movement action 33
	.4byte sMovementActionFuncs_WalkInPlaceFastUp @ movement action 34
	.4byte sMovementActionFuncs_WalkInPlaceFastLeft @ movement action 35
	.4byte sMovementActionFuncs_WalkInPlaceFastRight @ movement action 36
	.4byte sMovementActionFuncs_WalkInPlaceFastestDown @ movement action 37
	.4byte sMovementActionFuncs_WalkInPlaceFastestUp @ movement action 38
	.4byte sMovementActionFuncs_WalkInPlaceFastestLeft @ movement action 39
	.4byte sMovementActionFuncs_WalkInPlaceFastestRight @ movement action 40
	.4byte sMovementActionFuncs_RideWaterCurrentDown @ movement action 41
	.4byte sMovementActionFuncs_RideWaterCurrentUp @ movement action 42
	.4byte sMovementActionFuncs_RideWaterCurrentLeft @ movement action 43
	.4byte sMovementActionFuncs_RideWaterCurrentRight @ movement action 44
	.4byte sMovementActionFuncs_WalkFastestDown @ movement action 45
	.4byte sMovementActionFuncs_WalkFastestUp @ movement action 46
	.4byte sMovementActionFuncs_WalkFastestLeft @ movement action 47
	.4byte sMovementActionFuncs_WalkFastestRight @ movement action 48
	.4byte sMovementActionFuncs_SlideDown @ movement action 49
	.4byte sMovementActionFuncs_SlideUp @ movement action 50
	.4byte sMovementActionFuncs_SlideLeft @ movement action 51
	.4byte sMovementActionFuncs_SlideRight @ movement action 52
	.4byte sMovementActionFuncs_PlayerRunDown @ movement action 53
	.4byte sMovementActionFuncs_PlayerRunUp @ movement action 54
	.4byte sMovementActionFuncs_PlayerRunLeft @ movement action 55
	.4byte sMovementActionFuncs_PlayerRunRight @ movement action 56
	.4byte sMovementActionFuncs_StartAnimInDirection @ movement action 57
	.4byte sMovementActionFuncs_JumpSpecialDown @ movement action 58
	.4byte sMovementActionFuncs_JumpSpecialUp @ movement action 59
	.4byte sMovementActionFuncs_JumpSpecialLeft @ movement action 60
	.4byte sMovementActionFuncs_JumpSpecialRight @ movement action 61
	.4byte sMovementActionFuncs_FacePlayer @ movement action 62
	.4byte sMovementActionFuncs_FaceAwayPlayer @ movement action 63
	.4byte sMovementActionFuncs_LockFacingDirection @ movement action 64
	.4byte sMovementActionFuncs_UnlockFacingDirection @ movement action 65
	.4byte sMovementActionFuncs_JumpDown @ movement action 66
	.4byte sMovementActionFuncs_JumpUp @ movement action 67
	.4byte sMovementActionFuncs_JumpLeft @ movement action 68
	.4byte sMovementActionFuncs_JumpRight @ movement action 69
	.4byte sMovementActionFuncs_JumpInPlaceDown @ movement action 70
	.4byte sMovementActionFuncs_JumpInPlaceUp @ movement action 71
	.4byte sMovementActionFuncs_JumpInPlaceLeft @ movement action 72
	.4byte sMovementActionFuncs_JumpInPlaceRight @ movement action 73
	.4byte sMovementActionFuncs_JumpInPlaceDownUp @ movement action 74
	.4byte sMovementActionFuncs_JumpInPlaceUpDown @ movement action 75
	.4byte sMovementActionFuncs_JumpInPlaceLeftRight @ movement action 76
	.4byte sMovementActionFuncs_JumpInPlaceRightLeft @ movement action 77
	.4byte sMovementActionFuncs_FaceOriginalDirection @ movement action 78
	.4byte sMovementActionFuncs_NurseJoyBowDown @ movement action 79
	.4byte sMovementActionFuncs_EnableJumpLandingGroundEffect @ movement action 80
	.4byte sMovementActionFuncs_DisableJumpLandingGroundEffect @ movement action 81
	.4byte sMovementActionFuncs_DisableAnimation @ movement action 82
	.4byte sMovementActionFuncs_RestoreAnimation @ movement action 83
	.4byte sMovementActionFuncs_SetInvisible @ movement action 84
	.4byte sMovementActionFuncs_SetVisible @ movement action 85
	.4byte sMovementActionFuncs_EmoteExclamationMark @ movement action 86
	.4byte sMovementActionFuncs_EmoteQuestionMark @ movement action 87
	.4byte sMovementActionFuncs_EmoteHeart @ movement action 88
	.4byte sMovementActionFuncs_RevealTrainer @ movement action 89
	.4byte sMovementActionFuncs_RockSmashBreak @ movement action 90
	.4byte sMovementActionFuncs_CutTree @ movement action 91
	.4byte sMovementActionFuncs_SetFixedPriority @ movement action 92
	.4byte sMovementActionFuncs_ClearFixedPriority @ movement action 93
	.4byte sMovementActionFuncs_InitAffineAnim @ movement action 94
	.4byte sMovementActionFuncs_ClearAffineAnim @ movement action 95
	.4byte sMovementActionFuncs_HideReflection @ movement action 96
	.4byte sMovementActionFuncs_ShowReflection @ movement action 97
	.4byte sMovementActionFuncs_WalkDownStartAffine @ movement action 98
	.4byte sMovementActionFuncs_WalkDownAffine @ movement action 99
	.4byte sMovementActionFuncs_AcroWheelieFaceDown @ movement action 100
	.4byte sMovementActionFuncs_AcroWheelieFaceUp @ movement action 101
	.4byte sMovementActionFuncs_AcroWheelieFaceLeft @ movement action 102
	.4byte sMovementActionFuncs_AcroWheelieFaceRight @ movement action 103
	.4byte sMovementActionFuncs_AcroPopWheelieDown @ movement action 104
	.4byte sMovementActionFuncs_AcroPopWheelieUp @ movement action 105
	.4byte sMovementActionFuncs_AcroPopWheelieLeft @ movement action 106
	.4byte sMovementActionFuncs_AcroPopWheelieRight @ movement action 107
	.4byte sMovementActionFuncs_AcroEndWheelieFaceDown @ movement action 108
	.4byte sMovementActionFuncs_AcroEndWheelieFaceUp @ movement action 109
	.4byte sMovementActionFuncs_sub_08095388 @ movement action 110
	.4byte sMovementActionFuncs_AcroEndWheelieFaceRight @ movement action 111
	.4byte sMovementActionFuncs_AcroWheelieHopFaceDown @ movement action 112
	.4byte sMovementActionFuncs_AcroWheelieHopFaceUp @ movement action 113
	.4byte sMovementActionFuncs_AcroWheelieHopFaceLeft @ movement action 114
	.4byte sMovementActionFuncs_AcroWheelieHopFaceRight @ movement action 115
	.4byte sMovementActionFuncs_AcroWheelieHopDown @ movement action 116
	.4byte sMovementActionFuncs_AcroWheelieHopUp @ movement action 117
	.4byte sMovementActionFuncs_AcroWheelieHopLeft @ movement action 118
	.4byte sMovementActionFuncs_AcroWheelieHopRight @ movement action 119
	.4byte sMovementActionFuncs_AcroWheelieJumpDown @ movement action 120
	.4byte sMovementActionFuncs_AcroWheelieJumpUp @ movement action 121
	.4byte sMovementActionFuncs_AcroWheelieJumpLeft @ movement action 122
	.4byte sMovementActionFuncs_AcroWheelieJumpRight @ movement action 123
	.4byte sMovementActionFuncs_AcroWheelieInPlaceDown @ movement action 124
	.4byte sMovementActionFuncs_AcroWheelieInPlaceUp @ movement action 125
	.4byte sMovementActionFuncs_AcroWheelieInPlaceLeft @ movement action 126
	.4byte sMovementActionFuncs_AcroWheelieInPlaceRight @ movement action 127
	.4byte sMovementActionFuncs_sub_08095A70 @ movement action 128
	.4byte sMovementActionFuncs_sub_08095AB0 @ movement action 129
	.4byte sMovementActionFuncs_sub_08095AF0 @ movement action 130
	.4byte sMovementActionFuncs_sub_08095B30 @ movement action 131
	.4byte sMovementActionFuncs_AcroWheelieMoveDown @ movement action 132
	.4byte sMovementActionFuncs_AcroWheelieMoveUp @ movement action 133
	.4byte sMovementActionFuncs_AcroWheelieMoveLeft @ movement action 134
	.4byte sMovementActionFuncs_AcroWheelieMoveRight @ movement action 135
	.4byte sMovementActionFuncs_AcroEndWheelieMoveDown @ movement action 136
	.4byte sMovementActionFuncs_AcroEndWheelieMoveUp @ movement action 137
	.4byte sMovementActionFuncs_AcroEndWheelieMoveLeft @ movement action 138
	.4byte sMovementActionFuncs_AcroEndWheelieMoveRight @ movement action 139
	.4byte sMovementActionFuncs_WalkNormalDiagonalUpLeft @ movement action 140
	.4byte sMovementActionFuncs_WalkNormalDiagonalUpRight @ movement action 141
	.4byte sMovementActionFuncs_WalkNormalDiagonalDownLeft @ movement action 142
	.4byte sMovementActionFuncs_WalkNormalDiagonalDownRight @ movement action 143
	.4byte sMovementActionFuncs_WalkSlowDiagonalUpLeft @ movement action 144
	.4byte sMovementActionFuncs_WalkSlowDiagonalUpRight @ movement action 145
	.4byte sMovementActionFuncs_WalkSlowDiagonalDownLeft @ movement action 146
	.4byte sMovementActionFuncs_WalkSlowDiagonalDownRight @ movement action 147
	.4byte sMovementActionFuncs_StoreAndLockAnim @ movement action 148
	.4byte sMovementActionFuncs_FreeAndUnlockAnim @ movement action 149
	.4byte sMovementActionFuncs_WalkLeftAffine @ movement action 150
	.4byte sMovementActionFuncs_WalkRightAffine @ movement action 151
	.4byte sMovementActionFuncs_Levitate @ movement action 152
	.4byte sMovementActionFuncs_StopLevitate @ movement action 153
	.4byte sMovementActionFuncs_DestroyExtraTaskIfAtTop @ movement action 154
	.4byte sMovementActionFuncs_Figure8 @ movement action 155
	.4byte sMovementActionFuncs_FlyUp @ movement action 156
	.4byte sMovementActionFuncs_FlyDown @ movement action 157

	@ proven function-pointer table
sMovementActionFuncs_FaceDown: @ 0x084E631C
	.4byte MovementAction_FaceDown_Step0
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_FaceUp: @ 0x084E6324
	.4byte MovementAction_FaceUp_Step0
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_FaceLeft: @ 0x084E632C
	.4byte MovementAction_FaceLeft_Step0
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_FaceRight: @ 0x084E6334
	.4byte MovementAction_FaceRight_Step0
	.4byte MovementAction_PauseSpriteAnim
	.4byte GetJumpInPlaceTurnAroundMovementAction
	.4byte GetJumpMovementAction
	.4byte GetJumpMovementAction
	.4byte GetJumpSpecialMovementAction
	.4byte GetPlayerRunMovementAction
sMovementActionFuncs_WalkSlowDiagonalUpLeft: @ 0x084E6350
	.4byte MovementAction_WalkSlowDiagonalUpLeft_Step0
	.4byte sub_08093554
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkSlowDiagonalUpRight: @ 0x084E635C
	.4byte MovementAction_WalkSlowDiagonalUpRight_Step0
	.4byte MovementAction_WalkSlowDiagonalUpRight_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkSlowDiagonalDownLeft: @ 0x084E6368
	.4byte MovementAction_WalkSlowDiagonalDownLeft_Step0
	.4byte MovementAction_WalkSlowDiagonalDownLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkSlowDiagonalDownRight: @ 0x084E6374
	.4byte MovementAction_WalkSlowDiagonalDownRight_Step0
	.4byte MovementAction_WalkSlowDiagonalDownRight_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkSlowDown: @ 0x084E6380
	.4byte MovementAction_WalkSlowDown_Step0
	.4byte MovementAction_WalkSlowDown_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkSlowUp: @ 0x084E638C
	.4byte MovementAction_WalkSlowUp_Step0
	.4byte MovementAction_WalkSlowUp_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkSlowLeft: @ 0x084E6398
	.4byte MovementAction_WalkSlowLeft_Step0
	.4byte MovementAction_WalkSlowLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkSlowRight: @ 0x084E63A4
	.4byte MovementAction_WalkSlowRight_Step0
	.4byte MovementAction_WalkSlowRight_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkNormalDiagonalUpLeft: @ 0x084E63B0
	.4byte MovementAction_WalkNormalDiagonalUpLeft_Step0
	.4byte MovementAction_WalkNormalDiagonalUpLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkNormalDiagonalUpRight: @ 0x084E63BC
	.4byte MovementAction_WalkNormalDiagonalUpRight_Step0
	.4byte MovementAction_WalkNormalDiagonalUpRight_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkNormalDiagonalDownLeft: @ 0x084E63C8
	.4byte MovementAction_WalkNormalDiagonalDownLeft_Step0
	.4byte MovementAction_WalkNormalDiagonalDownLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkNormalDiagonalDownRight: @ 0x084E63D4
	.4byte MovementAction_WalkNormalDiagonalDownRight_Step0
	.4byte MovementAction_WalkNormalDiagonalDownRight_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkNormalDown: @ 0x084E63E0
	.4byte MovementAction_WalkNormalDown_Step0
	.4byte MovementAction_WalkNormalDown_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkNormalUp: @ 0x084E63EC
	.4byte MovementAction_WalkNormalUp_Step0
	.4byte MovementAction_WalkNormalUp_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkNormalLeft: @ 0x084E63F8
	.4byte MovementAction_WalkNormalLeft_Step0
	.4byte MovementAction_WalkNormalLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkNormalRight: @ 0x084E6404
	.4byte MovementAction_WalkNormalRight_Step0
	.4byte MovementAction_WalkNormalRight_Step1
	.4byte MovementAction_PauseSpriteAnim
	@ pret/pokeemerald-jp direct xref for 0x084E6410: event_object_movement.s: sub_08093934
	.globl gEventObjectMovementData_084E6410
gEventObjectMovementData_084E6410:
gMovementActionCoordUpdateOffsets1: @ 0x084E6410
	@ sub_08093934 indexes this as three signed halfwords.
	.2byte 0, 1, 1
	@ pret/pokeemerald-jp direct xref for 0x084E6416: event_object_movement.s: sub_08093A34
	.globl gEventObjectMovementData_084E6416
gEventObjectMovementData_084E6416:
gMovementActionCoordUpdateOffsets2: @ 0x084E6416
	@ sub_08093A34 indexes this as three signed halfwords.
	.2byte 0, 0, 1

	@ proven function-pointer table
sMovementActionFuncs_Jump2Down: @ 0x084E641C
	.4byte MovementAction_Jump2Down_Step0
	.4byte MovementAction_Jump2Down_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_Jump2Up: @ 0x084E6428
	.4byte MovementAction_Jump2Up_Step0
	.4byte MovementAction_Jump2Up_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_Jump2Left: @ 0x084E6434
	.4byte MovementAction_Jump2Left_Step0
	.4byte MovementAction_Jump2Left_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_Jump2Right: @ 0x084E6440
	.4byte MovementAction_Jump2Right_Step0
	.4byte MovementAction_Jump2Right_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_Delay1: @ 0x084E644C
	.4byte MovementAction_Delay1_Step0
	.4byte MovementAction_Delay_Step1
	.4byte sub_08095E28
sMovementActionFuncs_Delay2: @ 0x084E6458
	.4byte MovementAction_Delay2_Step0
	.4byte MovementAction_Delay_Step1
	.4byte sub_08095E28
sMovementActionFuncs_Delay4: @ 0x084E6464
	.4byte MovementAction_Delay4_Step0
	.4byte MovementAction_Delay_Step1
	.4byte sub_08095E28
sMovementActionFuncs_Delay8: @ 0x084E6470
	.4byte MovementAction_Delay8_Step0
	.4byte MovementAction_Delay_Step1
	.4byte sub_08095E28
sMovementActionFuncs_Delay16: @ 0x084E647C
	.4byte MovementAction_Delay16_Step0
	.4byte MovementAction_Delay_Step1
	.4byte sub_08095E28
sMovementActionFuncs_WalkFastDown: @ 0x084E6488
	.4byte MovementAction_WalkFastDown_Step0
	.4byte MovementAction_WalkFastDown_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkFastUp: @ 0x084E6494
	.4byte MovementAction_WalkFastUp_Step0
	.4byte MovementAction_WalkFastUp_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkFastLeft: @ 0x084E64A0
	.4byte MovementAction_WalkFastLeft_Step0
	.4byte MovementAction_WalkFastLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkFastRight: @ 0x084E64AC
	.4byte MovementAction_WalkFastRight_Step0
	.4byte MovementAction_WalkFastRight_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkInPlaceSlowDown: @ 0x084E64B8
	.4byte MovementAction_WalkInPlaceSlowDown_Step0
	.4byte MovementAction_WalkInPlaceSlow_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkInPlaceSlowUp: @ 0x084E64C4
	.4byte MovementAction_WalkInPlaceSlowUp_Step0
	.4byte MovementAction_WalkInPlaceSlow_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkInPlaceSlowLeft: @ 0x084E64D0
	.4byte MovementAction_WalkInPlaceSlowLeft_Step0
	.4byte MovementAction_WalkInPlaceSlow_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkInPlaceSlowRight: @ 0x084E64DC
	.4byte MovementAction_WalkInPlaceSlowRight_Step0
	.4byte MovementAction_WalkInPlaceSlow_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkInPlaceNormalDown: @ 0x084E64E8
	.4byte MovementAction_WalkInPlaceNormalDown_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkInPlaceNormalUp: @ 0x084E64F4
	.4byte MovementAction_WalkInPlaceNormalUp_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkInPlaceNormalLeft: @ 0x084E6500
	.4byte MovementAction_WalkInPlaceNormalLeft_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkInPlaceNormalRight: @ 0x084E650C
	.4byte MovementAction_WalkInPlaceNormalRight_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkInPlaceFastDown: @ 0x084E6518
	.4byte MovementAction_WalkInPlaceFastDown_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkInPlaceFastUp: @ 0x084E6524
	.4byte MovementAction_WalkInPlaceFastUp_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkInPlaceFastLeft: @ 0x084E6530
	.4byte MovementAction_WalkInPlaceFastLeft_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkInPlaceFastRight: @ 0x084E653C
	.4byte MovementAction_WalkInPlaceFastRight_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkInPlaceFastestDown: @ 0x084E6548
	.4byte MovementAction_WalkInPlaceFastestDown_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkInPlaceFastestUp: @ 0x084E6554
	.4byte MovementAction_WalkInPlaceFastestUp_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkInPlaceFastestLeft: @ 0x084E6560
	.4byte MovementAction_WalkInPlaceFastestLeft_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkInPlaceFastestRight: @ 0x084E656C
	.4byte MovementAction_WalkInPlaceFastestRight_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_RideWaterCurrentDown: @ 0x084E6578
	.4byte MovementAction_RideWaterCurrentDown_Step0
	.4byte MovementAction_RideWaterCurrentDown_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_RideWaterCurrentUp: @ 0x084E6584
	.4byte MovementAction_RideWaterCurrentUp_Step0
	.4byte MovementAction_RideWaterCurrentUp_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_RideWaterCurrentLeft: @ 0x084E6590
	.4byte MovementAction_RideWaterCurrentLeft_Step0
	.4byte MovementAction_RideWaterCurrentLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_RideWaterCurrentRight: @ 0x084E659C
	.4byte MovementAction_RideWaterCurrentRight_Step0
	.4byte MovementAction_RideWaterCurrentRight_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkFastestDown: @ 0x084E65A8
	.4byte MovementAction_WalkFastestDown_Step0
	.4byte MovementAction_WalkFastestDown_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkFastestUp: @ 0x084E65B4
	.4byte MovementAction_WalkFastestUp_Step0
	.4byte MovementAction_WalkFastestUp_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkFastestLeft: @ 0x084E65C0
	.4byte MovementAction_WalkFastestLeft_Step0
	.4byte MovementAction_WalkFastestLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkFastestRight: @ 0x084E65CC
	.4byte MovementAction_WalkFastestRight_Step0
	.4byte MovementAction_WalkFastestRight_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_SlideDown: @ 0x084E65D8
	.4byte MovementAction_SlideDown_Step0
	.4byte MovementAction_SlideDown_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_SlideUp: @ 0x084E65E4
	.4byte MovementAction_SlideUp_Step0
	.4byte MovementAction_SlideUp_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_SlideLeft: @ 0x084E65F0
	.4byte MovementAction_SlideLeft_Step0
	.4byte MovementAction_SlideLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_SlideRight: @ 0x084E65FC
	.4byte MovementAction_SlideRight_Step0
	.4byte MovementAction_SlideRight_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_PlayerRunDown: @ 0x084E6608
	.4byte MovementAction_PlayerRunDown_Step0
	.4byte MovementAction_PlayerRunDown_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_PlayerRunUp: @ 0x084E6614
	.4byte MovementAction_PlayerRunUp_Step0
	.4byte MovementAction_PlayerRunUp_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_PlayerRunLeft: @ 0x084E6620
	.4byte MovementAction_PlayerRunLeft_Step0
	.4byte MovementAction_PlayerRunLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_PlayerRunRight: @ 0x084E662C
	.4byte MovementAction_PlayerRunRight_Step0
	.4byte MovementAction_PlayerRunRight_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_StartAnimInDirection: @ 0x084E6638
	.4byte MovementAction_StartAnimInDirection_Step0
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_JumpSpecialDown: @ 0x084E6644
	.4byte MovementAction_JumpSpecialDown_Step0
	.4byte MovementAction_JumpSpecialDown_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_JumpSpecialUp: @ 0x084E6650
	.4byte MovementAction_JumpSpecialUp_Step0
	.4byte MovementAction_JumpSpecialUp_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_JumpSpecialLeft: @ 0x084E665C
	.4byte MovementAction_JumpSpecialLeft_Step0
	.4byte MovementAction_JumpSpecialLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_JumpSpecialRight: @ 0x084E6668
	.4byte MovementAction_JumpSpecialRight_Step0
	.4byte MovementAction_JumpSpecialRight_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_FacePlayer: @ 0x084E6674
	.4byte MovementAction_FacePlayer_Step0
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_FaceAwayPlayer: @ 0x084E667C
	.4byte MovementAction_FaceAwayPlayer_Step0
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_LockFacingDirection: @ 0x084E6684
	.4byte MovementAction_LockFacingDirection_Step0
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_UnlockFacingDirection: @ 0x084E668C
	.4byte MovementAction_UnlockFacingDirection_Step0
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_JumpDown: @ 0x084E6694
	.4byte MovementAction_JumpDown_Step0
	.4byte MovementAction_JumpDown_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_JumpUp: @ 0x084E66A0
	.4byte MovementAction_JumpUp_Step0
	.4byte MovementAction_JumpUp_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_JumpLeft: @ 0x084E66AC
	.4byte MovementAction_JumpLeft_Step0
	.4byte MovementAction_JumpLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_JumpRight: @ 0x084E66B8
	.4byte MovementAction_JumpRight_Step0
	.4byte MovementAction_JumpRight_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_JumpInPlaceDown: @ 0x084E66C4
	.4byte MovementAction_JumpInPlaceDown_Step0
	.4byte MovementAction_JumpInPlaceDown_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_JumpInPlaceUp: @ 0x084E66D0
	.4byte MovementAction_JumpInPlaceUp_Step0
	.4byte MovementAction_JumpInPlaceUp_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_JumpInPlaceLeft: @ 0x084E66DC
	.4byte MovementAction_JumpInPlaceLeft_Step0
	.4byte MovementAction_JumpInPlaceLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_JumpInPlaceRight: @ 0x084E66E8
	.4byte MovementAction_JumpInPlaceRight_Step0
	.4byte MovementAction_JumpInPlaceRight_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_JumpInPlaceDownUp: @ 0x084E66F4
	.4byte MovementAction_JumpInPlaceDownUp_Step0
	.4byte MovementAction_JumpInPlaceDownUp_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_JumpInPlaceUpDown: @ 0x084E6700
	.4byte MovementAction_JumpInPlaceUpDown_Step0
	.4byte MovementAction_JumpInPlaceUpDown_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_JumpInPlaceLeftRight: @ 0x084E670C
	.4byte MovementAction_JumpInPlaceLeftRight_Step0
	.4byte MovementAction_JumpInPlaceLeftRight_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_JumpInPlaceRightLeft: @ 0x084E6718
	.4byte MovementAction_JumpInPlaceRightLeft_Step0
	.4byte MovementAction_JumpInPlaceRightLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_FaceOriginalDirection: @ 0x084E6724
	.4byte MovementAction_FaceOriginalDirection_Step0
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_NurseJoyBowDown: @ 0x084E672C
	.4byte MovementAction_NurseJoyBowDown_Step0
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_EnableJumpLandingGroundEffect: @ 0x084E6738
	.4byte MovementAction_EnableJumpLandingGroundEffect_Step0
	.4byte sub_08095E28
sMovementActionFuncs_DisableJumpLandingGroundEffect: @ 0x084E6740
	.4byte MovementAction_DisableJumpLandingGroundEffect_Step0
	.4byte sub_08095E28
sMovementActionFuncs_DisableAnimation: @ 0x084E6748
	.4byte MovementAction_DisableAnimation_Step0
	.4byte sub_08095E28
sMovementActionFuncs_RestoreAnimation: @ 0x084E6750
	.4byte MovementAction_RestoreAnimation_Step0
	.4byte sub_08095E28
sMovementActionFuncs_SetInvisible: @ 0x084E6758
	.4byte MovementAction_SetInvisible_Step0
	.4byte sub_08095E28
sMovementActionFuncs_SetVisible: @ 0x084E6760
	.4byte MovementAction_SetVisible_Step0
	.4byte sub_08095E28
sMovementActionFuncs_EmoteExclamationMark: @ 0x084E6768
	.4byte MovementAction_EmoteExclamationMark_Step0
	.4byte sub_08095E28
sMovementActionFuncs_EmoteQuestionMark: @ 0x084E6770
	.4byte MovementAction_EmoteQuestionMark_Step0
	.4byte sub_08095E28
sMovementActionFuncs_EmoteHeart: @ 0x084E6778
	.4byte MovementAction_EmoteHeart_Step0
	.4byte sub_08095E28
sMovementActionFuncs_RevealTrainer: @ 0x084E6780
	.4byte MovementAction_RevealTrainer_Step0
	.4byte MovementAction_RevealTrainer_Step1
	.4byte sub_08095E28
sMovementActionFuncs_RockSmashBreak: @ 0x084E678C
	.4byte MovementAction_RockSmashBreak_Step0
	.4byte MovementAction_RockSmashBreak_Step1
	.4byte MovementAction_RockSmashBreak_Step2
	.4byte sub_08095E28
sMovementActionFuncs_CutTree: @ 0x084E679C
	.4byte MovementAction_CutTree_Step0
	.4byte MovementAction_CutTree_Step1
	.4byte MovementAction_CutTree_Step2
	.4byte sub_08095E28
sMovementActionFuncs_SetFixedPriority: @ 0x084E67AC
	.4byte MovementAction_SetFixedPriority_Step0
	.4byte sub_08095E28
sMovementActionFuncs_ClearFixedPriority: @ 0x084E67B4
	.4byte MovementAction_ClearFixedPriority_Step0
	.4byte sub_08095E28
sMovementActionFuncs_InitAffineAnim: @ 0x084E67BC
	.4byte MovementAction_InitAffineAnim_Step0
	.4byte sub_08095E28
sMovementActionFuncs_ClearAffineAnim: @ 0x084E67C4
	.4byte MovementAction_ClearAffineAnim_Step0
	.4byte sub_08095E28
sMovementActionFuncs_HideReflection: @ 0x084E67CC
	.4byte MovementAction_HideReflection_Step0
	.4byte sub_08095E28
sMovementActionFuncs_ShowReflection: @ 0x084E67D4
	.4byte MovementAction_ShowReflection_Step0
	.4byte sub_08095E28
sMovementActionFuncs_WalkDownStartAffine: @ 0x084E67DC
	.4byte MovementAction_WalkDownStartAffine_Step0
	.4byte MovementAction_WalkDownStartAffine_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkDownAffine: @ 0x084E67E8
	.4byte MovementAction_WalkDownAffine_Step0
	.4byte MovementAction_WalkDownAffine_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkLeftAffine: @ 0x084E67F4
	.4byte MovementAction_WalkLeftAffine_Step0
	.4byte MovementAction_WalkLeftAffine_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_WalkRightAffine: @ 0x084E6800
	.4byte MovementAction_WalkRightAffine_Step0
	.4byte MovementAction_WalkRightAffine_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroWheelieFaceDown: @ 0x084E680C
	.4byte MovementAction_AcroWheelieFaceDown_Step0
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroWheelieFaceUp: @ 0x084E6814
	.4byte MovementAction_AcroWheelieFaceUp_Step0
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroWheelieFaceLeft: @ 0x084E681C
	.4byte MovementAction_AcroWheelieFaceLeft_Step0
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroWheelieFaceRight: @ 0x084E6824
	.4byte MovementAction_AcroWheelieFaceRight_Step0
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroPopWheelieDown: @ 0x084E682C
	.4byte MovementAction_AcroPopWheelieDown_Step0
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroPopWheelieUp: @ 0x084E6838
	.4byte MovementAction_AcroPopWheelieUp_Step0
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroPopWheelieLeft: @ 0x084E6844
	.4byte MovementAction_AcroPopWheelieLeft_Step0
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroPopWheelieRight: @ 0x084E6850
	.4byte MovementAction_AcroPopWheelieRight_Step0
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroEndWheelieFaceDown: @ 0x084E685C
	.4byte MovementAction_AcroEndWheelieFaceDown_Step0
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroEndWheelieFaceUp: @ 0x084E6868
	.4byte MovementAction_AcroEndWheelieFaceUp_Step0
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_sub_08095388: @ 0x084E6874
	.4byte sub_08095388
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroEndWheelieFaceRight: @ 0x084E6880
	.4byte MovementAction_AcroEndWheelieFaceRight_Step0
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_UnusedAcroActionDown_Step0
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_UnusedAcroActionUp_Step0
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_UnusedAcroActionLeft_Step0
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_UnusedAcroActionRight_Step0
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_Figure8: @ 0x084E68BC
	.4byte MovementAction_Figure8_Step0
	.4byte sub_080954D4
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroWheelieHopFaceDown: @ 0x084E68C8
	.4byte MovementAction_AcroWheelieHopFaceDown_Step0
	.4byte MovementAction_AcroWheelieHopFaceDown_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroWheelieHopFaceUp: @ 0x084E68D4
	.4byte MovementAction_AcroWheelieHopFaceUp_Step0
	.4byte MovementAction_AcroWheelieHopFaceUp_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroWheelieHopFaceLeft: @ 0x084E68E0
	.4byte MovementAction_AcroWheelieHopFaceLeft_Step0
	.4byte MovementAction_AcroWheelieHopFaceLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroWheelieHopFaceRight: @ 0x084E68EC
	.4byte MovementAction_AcroWheelieHopFaceRight_Step0
	.4byte MovementAction_AcroWheelieHopFaceRight_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroWheelieHopDown: @ 0x084E68F8
	.4byte MovementAction_AcroWheelieHopDown_Step0
	.4byte MovementAction_AcroWheelieHopDown_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroWheelieHopUp: @ 0x084E6904
	.4byte MovementAction_AcroWheelieHopUp_Step0
	.4byte MovementAction_AcroWheelieHopUp_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroWheelieHopLeft: @ 0x084E6910
	.4byte MovementAction_AcroWheelieHopLeft_Step0
	.4byte MovementAction_AcroWheelieHopLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroWheelieHopRight: @ 0x084E691C
	.4byte MovementAction_AcroWheelieHopRight_Step0
	.4byte MovementAction_AcroWheelieHopRight_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroWheelieJumpDown: @ 0x084E6928
	.4byte MovementAction_AcroWheelieJumpDown_Step0
	.4byte MovementAction_AcroWheelieJumpDown_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroWheelieJumpUp: @ 0x084E6934
	.4byte MovementAction_AcroWheelieJumpUp_Step0
	.4byte MovementAction_AcroWheelieJumpUp_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroWheelieJumpLeft: @ 0x084E6940
	.4byte MovementAction_AcroWheelieJumpLeft_Step0
	.4byte MovementAction_AcroWheelieJumpLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroWheelieJumpRight: @ 0x084E694C
	.4byte MovementAction_AcroWheelieJumpRight_Step0
	.4byte MovementAction_AcroWheelieJumpRight_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroWheelieInPlaceDown: @ 0x084E6958
	.4byte MovementAction_AcroWheelieInPlaceDown_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroWheelieInPlaceUp: @ 0x084E6964
	.4byte MovementAction_AcroWheelieInPlaceUp_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroWheelieInPlaceLeft: @ 0x084E6970
	.4byte MovementAction_AcroWheelieInPlaceLeft_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroWheelieInPlaceRight: @ 0x084E697C
	.4byte MovementAction_AcroWheelieInPlaceRight_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_sub_08095A70: @ 0x084E6988
	.4byte sub_08095A70
	.4byte MovementAction_AcroPopWheelieMoveDown_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_sub_08095AB0: @ 0x084E6994
	.4byte sub_08095AB0
	.4byte MovementAction_AcroPopWheelieMoveUp_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_sub_08095AF0: @ 0x084E69A0
	.4byte sub_08095AF0
	.4byte MovementAction_AcroPopWheelieMoveLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_sub_08095B30: @ 0x084E69AC
	.4byte sub_08095B30
	.4byte MovementAction_AcroPopWheelieMoveRight_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroWheelieMoveDown: @ 0x084E69B8
	.4byte MovementAction_AcroWheelieMoveDown_Step0
	.4byte MovementAction_AcroWheelieMoveDown_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroWheelieMoveUp: @ 0x084E69C4
	.4byte MovementAction_AcroWheelieMoveUp_Step0
	.4byte MovementAction_AcroWheelieMoveUp_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroWheelieMoveLeft: @ 0x084E69D0
	.4byte MovementAction_AcroWheelieMoveLeft_Step0
	.4byte MovementAction_AcroWheelieMoveLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroWheelieMoveRight: @ 0x084E69DC
	.4byte MovementAction_AcroWheelieMoveRight_Step0
	.4byte MovementAction_AcroWheelieMoveRight_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroEndWheelieMoveDown: @ 0x084E69E8
	.4byte MovementAction_AcroEndWheelieMoveDown_Step0
	.4byte MovementAction_AcroEndWheelieMoveDown_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroEndWheelieMoveUp: @ 0x084E69F4
	.4byte MovementAction_AcroEndWheelieMoveUp_Step0
	.4byte MovementAction_AcroEndWheelieMoveUp_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroEndWheelieMoveLeft: @ 0x084E6A00
	.4byte MovementAction_AcroEndWheelieMoveLeft_Step0
	.4byte MovementAction_AcroEndWheelieMoveLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_AcroEndWheelieMoveRight: @ 0x084E6A0C
	.4byte MovementAction_AcroEndWheelieMoveRight_Step0
	.4byte MovementAction_AcroEndWheelieMoveRight_Step1
	.4byte MovementAction_PauseSpriteAnim
sMovementActionFuncs_Levitate: @ 0x084E6A18
	.4byte MovementAction_Levitate_Step0
	.4byte sub_08095E28
sMovementActionFuncs_StopLevitate: @ 0x084E6A20
	.4byte MovementAction_StopLevitate_Step0
	.4byte sub_08095E28
sMovementActionFuncs_DestroyExtraTaskIfAtTop: @ 0x084E6A28
	.4byte MovementAction_DestroyExtraTaskIfAtTop_Step0
	.4byte sub_08095E28
	@ Resolved pointer table; original ROM range 0x4E6A30..0x4E6A37.
	.4byte PSR_T_BIT
	.4byte TYPE_DRAGON
	.globl gJumpLandingMetatileBehaviorPredicates
gJumpLandingMetatileBehaviorPredicates: @ 0x084E6A38
	.4byte MetatileBehavior_IsTallGrass
	.4byte MetatileBehavior_IsLongGrass_Duplicate
	.4byte MetatileBehavior_IsPuddle
	.4byte MetatileBehavior_IsSurfableWaterOrUnderwater
	.4byte MetatileBehavior_IsShallowFlowingWater
	.4byte MetatileBehavior_IsATile
	@ pret/pokeemerald-jp direct xref for 0x084E6A50: event_object_movement.s: GetGroundEffectFlags_JumpLanding
	.globl gEventObjectMovementData_084E6A50
gEventObjectMovementData_084E6A50:
gJumpLandingGroundEffectFlags: @ 0x084E6A50
	@ Indexed with the metatile behavior predicate table at gJumpLandingMetatileBehaviorPredicates.
	.4byte 0x00001000 @ tall grass
	.4byte 0x00002000 @ long grass
	.4byte 0x00004000 @ puddle
	.4byte 0x00008000 @ surfable water / underwater
	.4byte 0x00004000 @ shallow flowing water
	.4byte 0x00010000 @ A tile
	.4byte MetatileBehavior_IsJumpSouth
	.4byte MetatileBehavior_IsJumpNorth
	.4byte MetatileBehavior_IsJumpWest
	.4byte MetatileBehavior_IsJumpEast
	@ pret/pokeemerald-jp direct xref for 0x084E6A78: event_object_movement.s: SetObjectSubpriorityByZCoord
	.globl gEventObjectMovementData_084E6A78
gEventObjectMovementData_084E6A78:
gObjectSubpriorityOffsetsByZCoord: @ 0x084E6A78
	@ Indexed by Z coord in SetObjectSubpriorityByZCoord.
	.byte 0x73, 0x73, 0x53, 0x73, 0x53, 0x73, 0x53, 0x73, 0x53, 0x73, 0x53, 0x73, 0x53, 0x00, 0x00, 0x73
	@ pret/pokeemerald-jp direct xref for 0x084E6A88: event_object_movement.s: InitObjectPriorityByZCoord, UpdateEventObjectZCoordAndPriority, sub_08096718
	.globl gEventObjectMovementData_084E6A88
gEventObjectMovementData_084E6A88:
gObjectOamPrioritiesByZCoord: @ 0x084E6A88
	.byte 2, 2, 2, 2, 1, 2, 1, 2
	.byte 1, 2, 1, 2, 1, 0, 0, 2
	@ pret/pokeemerald-jp direct xref for 0x084E6A98: event_object_movement.s: InitObjectPriorityByZCoord, UpdateEventObjectZCoordAndPriority
	.globl gEventObjectMovementData_084E6A98
gEventObjectMovementData_084E6A98:
gObjectPrioritiesByZCoord: @ 0x084E6A98
	.byte 1, 1, 1, 1, 2, 1, 2, 1
	.byte 2, 1, 2, 1, 2, 0, 0, 1
	.4byte DoTracksGroundEffect_None
	.4byte DoTracksGroundEffect_Footprints
	.4byte DoTracksGroundEffect_BikeTireTracks
	@ pret/pokeemerald-jp direct xref for 0x084E6AB4: event_object_movement.s: DoTracksGroundEffect_Footprints
	.globl gEventObjectMovementData_084E6AB4
gEventObjectMovementData_084E6AB4:
gFootprintFieldEffectIds: @ 0x084E6AB4
	.2byte 0x0D, 0x18
	@ pret/pokeemerald-jp direct xref for 0x084E6AB8: event_object_movement.s: DoTracksGroundEffect_BikeTireTracks
	.globl gEventObjectMovementData_084E6AB8
gEventObjectMovementData_084E6AB8:
gBikeTireTrackDirections: @ 0x084E6AB8
	.byte 0x01, 0x02, 0x07, 0x08
	.byte 0x01, 0x02, 0x06, 0x05
	.byte 0x05, 0x08, 0x03, 0x04
	.byte 0x06, 0x07, 0x03, 0x04
	.4byte GroundEffect_SpawnOnTallGrass
	.4byte GroundEffect_StepOnTallGrass
	.4byte GroundEffect_SpawnOnLongGrass
	.4byte GroundEffect_StepOnLongGrass
	.4byte GroundEffect_WaterReflection
	.4byte GroundEffect_IceReflection
	.4byte GroundEffect_FlowingWater
	.4byte GroundEffect_SandTracks
	.4byte sub_08096984
	.4byte sub_08096A54
	.4byte GroundEffect_StepOnPuddle
	.4byte GroundEffect_SandHeap
	.4byte GroundEffect_JumpOnTallGrass
	.4byte GroundEffect_JumpOnLongGrass
	.4byte GroundEffect_JumpOnShallowWater
	.4byte GroundEffect_JumpOnWater
	.4byte GroundEffect_JumpLandingDust
	.4byte GroundEffect_ShortGrass
	.4byte GroundEffect_HotSprings
	.4byte GroundEffect_Seaweed
sMiniStepCallbackSequence_16Frames: @ 0x084E6B18
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step1
sMiniStepCallbackSequence_8Frames: @ 0x084E6B58
	.4byte Step2
	.4byte Step2
	.4byte Step2
	.4byte Step2
	.4byte Step2
	.4byte Step2
	.4byte Step2
	.4byte Step2
sMiniStepCallbackSequence_6Frames: @ 0x084E6B78
	.4byte Step2
	.4byte Step3
	.4byte Step3
	.4byte Step2
	.4byte Step3
	.4byte Step3
sMiniStepCallbackSequence_4Frames: @ 0x084E6B90
	.4byte Step4
	.4byte Step4
	.4byte Step4
	.4byte Step4
sMiniStepCallbackSequence_2Frames: @ 0x084E6BA0
	.4byte Step8
	.4byte Step8
	@ pret/pokeemerald-jp direct xref for 0x084E6BA8: event_object_movement.s: obj_npc_ministep
	.globl gEventObjectMovementData_084E6BA8
gEventObjectMovementData_084E6BA8:
gMiniStepCallbackSequencesByDurationSlot: @ 0x084E6BA8
	@ Indexed by the duration slot in obj_npc_ministep.
	.4byte sMiniStepCallbackSequence_16Frames
	.4byte sMiniStepCallbackSequence_8Frames
	.4byte sMiniStepCallbackSequence_6Frames
	.4byte sMiniStepCallbackSequence_4Frames
	.4byte sMiniStepCallbackSequence_2Frames
	@ pret/pokeemerald-jp direct xref for 0x084E6BBC: event_object_movement.s: obj_npc_ministep
	.globl gEventObjectMovementData_084E6BBC
gEventObjectMovementData_084E6BBC:
gMiniStepDurations: @ 0x084E6BBC
	.2byte 16, 8, 6, 4, 2
	@ pret/pokeemerald-jp direct xref for 0x084E6BC6: event_object_movement.s: sub_080970AC
	.globl gEventObjectMovementData_084E6BC6
gEventObjectMovementData_084E6BC6:
gMovementOffsetTable1: @ 0x084E6BC6
	.byte 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02
	.byte 0x02, 0x02, 0x02, 0x01, 0x02, 0x02, 0x01, 0x02
	.byte 0x02, 0x01, 0x02, 0x02, 0x01, 0x02, 0x01, 0x01
	.byte 0x02, 0x01, 0x01, 0x02, 0x01, 0x01, 0x02, 0x01
	.byte 0x01, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01
	.byte 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01
	.byte 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00
	.byte 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x084E6C0E: event_object_movement.s: sub_08097098
	.globl gEventObjectMovementData_084E6C0E
gEventObjectMovementData_084E6C0E:
gMovementOffsetTable2: @ 0x084E6C0E
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00
	.byte 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00
	.byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE
sMovementOffsetSequence_084E6C56: @ 0x084E6C56
	@ ANALYSIS: SEMANTIC_NUMERIC_MOVEMENT
	@ Object-movement command bytecode/sequence; numeric bytes are movement commands and terminators.
	.byte 0xFC, 0xFA, 0xF8, 0xF6, 0xF5, 0xF4, 0xF4, 0xF4
	.byte 0xF5, 0xF6, 0xF7, 0xF8, 0xFA, 0xFC, 0x00, 0x00
sMovementOffsetSequence_084E6C66: @ 0x084E6C66
	@ ANALYSIS: SEMANTIC_NUMERIC_MOVEMENT
	@ Object-movement command bytecode/sequence; numeric bytes are movement commands and terminators.
	.byte 0x00, 0xFE, 0xFD, 0xFC, 0xFB, 0xFA, 0xFA, 0xFA
	.byte 0xFB, 0xFB, 0xFC, 0xFD, 0xFE, 0x00, 0x00, 0x00
sMovementOffsetSequence_084E6C76: @ 0x084E6C76
	.byte 0xFE, 0xFC, 0xFA, 0xF8, 0xF7, 0xF6, 0xF6, 0xF6
	.byte 0xF7, 0xF8, 0xFA, 0xFB, 0xFD, 0xFE, 0x00, 0x00
	.byte 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x084E6C88: event_object_movement.s: sub_08097190
	.globl gEventObjectMovementData_084E6C88
gEventObjectMovementData_084E6C88:
gMovementOffsetSequences: @ 0x084E6C88
	@ Signed offset sequences indexed by sub_08097190.
	.4byte sMovementOffsetSequence_084E6C56
	.4byte sMovementOffsetSequence_084E6C66
	.4byte sMovementOffsetSequence_084E6C76
	@ pret/pokeemerald-jp direct xref for 0x084E6C94: event_object_movement.s: sub_080971CC
	.globl gEventObjectMovementData_084E6C94
gEventObjectMovementData_084E6C94:
gMovementOffsetDurations1: @ 0x084E6C94
	.2byte 16, 16, 32
	@ pret/pokeemerald-jp direct xref for 0x084E6C9A: event_object_movement.s: sub_080971CC
	.globl gEventObjectMovementData_084E6C9A
gEventObjectMovementData_084E6C9A:
gMovementOffsetShiftCounts1: @ 0x084E6C9A
	.byte 0, 0, 1
	.byte 0 @ padding
	@ pret/pokeemerald-jp direct xref for 0x084E6C9E: event_object_movement.s: sub_08097254
	.globl gEventObjectMovementData_084E6C9E
gEventObjectMovementData_084E6C9E:
gMovementOffsetDurations2: @ 0x084E6C9E
	.2byte 32, 32, 64
	@ pret/pokeemerald-jp direct xref for 0x084E6CA4: event_object_movement.s: sub_08097254
	.globl gEventObjectMovementData_084E6CA4
gEventObjectMovementData_084E6CA4:
gMovementOffsetShiftCounts2: @ 0x084E6CA4
	.byte 1, 1, 2
	.byte 0 @ padding
	@ pret/pokeemerald-jp direct xref for 0x084E6CA8: event_object_movement.s: sub_080976D8
	.globl gEventObjectMovementData_084E6CA8
gEventObjectMovementData_084E6CA8:
gEventObjectMovementAssertFile: @ 0x084E6CA8
	.ascii "evobjmv.c"
	.byte 0, 0, 0
	@ Resolved pointer table; original ROM range 0x4E6CB4..0x4E6CDF.
	.4byte MAP_NUM_ROUTE133
sMovementActionFuncs_StoreAndLockAnim: @ 0x084E6CB8
	.4byte MovementAction_StoreAndLockAnim_Step0
	.4byte sub_08095E28
sMovementActionFuncs_FreeAndUnlockAnim: @ 0x084E6CC0
	.4byte MovementAction_FreeAndUnlockAnim_Step0
	.4byte sub_08095E28
sMovementActionFuncs_FlyUp: @ 0x084E6CC8
	.4byte MovementAction_FlyUp_Step0
	.4byte MovementAction_FlyUp_Step1
	.4byte MovementAction_Finish
sMovementActionFuncs_FlyDown: @ 0x084E6CD4
	.4byte MovementAction_FlyDown_Step0
	.4byte MovementAction_FlyDown_Step1
	.4byte MovementAction_Finish
