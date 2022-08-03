class Color {
private: 
    int _value;
    const char *_name;
public:

    Color(const char *name, int value);
    void SetValue(int value);
    void SetName(const char *name);

    // Accessors
    unsigned char GetR() const;
    unsigned char GetG() const; 
    unsigned char GetB() const;
    string GetHexValue() const;
    string GetName() const;

};
Color::Color(const char *name, int value) {
    this->_name = name;
    this->_value = value;
}


// Setters

void Color::SetValue(int value) {
    this->_value = value;
}

void Color::SetName(const char *name) {
    this->_name = name;
}

// Accessors

unsigned char Color::GetR() const {

}

unsigned char Color::GetG() const {

}

unsigned char Color::GetB() const {

}

unsigned char Color::GetHexValue() const {

}

unsigned char Color::GetName() const {

}