#define GET_BIT(Reg, PinNumber)					Reg=(Reg &(1<<PinNumber))>>PinNumber
#define SET_BIT(Reg, PinNumber)                 Reg|=(1<<PinNumber)
#define CLR_BIT(Reg, PinNumber)					Reg&=~(1<<PinNumber)
#define TOGGLE_BIT(Reg, PinNumber)				Reg^=(1<<PinNumber)
#define ASSN_BIT(Reg, PinNumber,Value)          Reg=(Reg & ~(1<<PinNumber))|(Value<<PinNumber)

#define GET_REG(Reg)							Reg
#define SET_REG(Reg)							Reg=0b11111111
#define CLR_REG(Reg)							Reg=0b00000000
#define TOGGLE_REG(Reg)							Reg^=(0b11111111)
#define ASSIGN_REG(Reg, Value)					Reg=Value